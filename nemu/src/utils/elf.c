#include <common.h>
#include <elf.h>

#define NUM_ELF64_SHDR 64
#define NUM_ELF64_SYM 1024
#define SIZE_STRTABLE 8192

FILE *elf_fp = NULL;

Elf64_Ehdr *ehdr = NULL;
Elf64_Shdr shdr[NUM_ELF64_SHDR];
Elf64_Sym sym[NUM_ELF64_SYM];
char strtable[SIZE_STRTABLE];
char notfound[16] = "Ftrace Failed.";

void init_elf(const char *elf_file) {
	// open elf file -> elf_fp (like log_fp)
	elf_fp = stdin;
	if (elf_fp != NULL) {
		FILE *fp = fopen(elf_file, "r");
		Assert(fp, "Can not open '%s'", elf_file);
		elf_fp = fp;
	}
	Log("ELF is read from '%s'", elf_file ? elf_file : "stdin");
	// Parse elf file
	// ELF Check
	char ec[5];
	memset(ec, 0, sizeof(ec));
	fread(ec, 1, 5, elf_fp);
	if (ec[0] != 0x7f || ec[1] != 'E' || ec[2] != 'L' || ec[3] != 'F') {
		Log("[Ftrace - Warning] Checking ELF failed.");
		return;
	}
	// ELF Header
	fseek(elf_fp, 0, SEEK_SET);
	fread(ehdr, sizeof(Elf64_Ehdr), 1, elf_fp);
	// Section Header
	fseek(elf_fp, ehdr -> e_shoff, SEEK_SET);
	fread(shdr, sizeof(Elf64_Shdr), ehdr -> e_shnum, elf_fp);
	// Find symtab
	int symtab = -1;
	for (int i = 0; i < ehdr -> e_shnum; ++i) {
		if (shdr[i].sh_type == SHT_SYMTAB) {
			symtab = i;
			break;
		}
	}
	if (symtab == -1) {
		Log("[Ftrace - Warning] ELF file doesn't have a symtab.");
		return;
	}
	// Str Table (has error, need to be fixed)
	fseek(elf_fp, shdr[ehdr -> e_shstrndx].sh_offset, SEEK_SET);
  fread(strtable, 1, shdr[ehdr -> e_shstrndx].sh_size, elf_fp);
}

char *ftrace_search(uint64_t addr) {
	for (int i = 0; i < ehdr -> e_shnum; ++i) {
		if (shdr[i].sh_addr == addr) {
			return strtable + shdr[i].sh_name;
		}
	}
	return notfound;
}
