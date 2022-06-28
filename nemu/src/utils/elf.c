#include <common.h>
#include <elf.h>

#define NUM_ELF64_SHDR 64
#define NUM_ELF64_SYM 1024
#define SIZE_STRTABLE 8192
#define NUM_ELF64_RESULT 1024

FILE *elf_fp = NULL;

Elf64_Ehdr *ehdr = NULL;
Elf64_Shdr shdr[NUM_ELF64_SHDR];
int num_sym = 0;
Elf64_Sym sym[NUM_ELF64_SYM];
char strtable[SIZE_STRTABLE];
char notfound[16] = "????????????????";

int num_ret = 0;
struct elf_result {
  uint64_t pc;
  uint64_t addr;
  char *name;
  bool is_return;
} elf_ret[NUM_ELF64_RESULT];

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
  if (fread(ec, 1, 5, elf_fp) == 0) {
    Log("[Ftrace - fread] Error occors while reading magic characters.");
  }
  if (ec[0] != 0x7f || ec[1] != 'E' || ec[2] != 'L' || ec[3] != 'F') {
    Log("[Ftrace - Warning] Checking ELF failed.");
    return;
  }
  // ELF Header
  ehdr = (Elf64_Ehdr*)malloc(sizeof(Elf64_Ehdr));
  fseek(elf_fp, 0L, SEEK_SET);
  if (fread(ehdr, sizeof(Elf64_Ehdr), 1, elf_fp) == 0) {
    Log("[Ftrace - fread] Error occors while reading ELF header.");
  }
  // Section Header
  fseek(elf_fp, ehdr -> e_shoff, SEEK_SET);
  if (fread(shdr, sizeof(Elf64_Shdr), ehdr -> e_shnum, elf_fp) == 0) {
    Log("[Ftrace - fread] Error occors while reading Section header.");
  }
  // Find .symtab and .strtab
  int symtab = -1, strtab = -1;
  for (int i = 0; i < ehdr -> e_shnum; ++i) {
    if (shdr[i].sh_type == SHT_SYMTAB) symtab = i;
    if (shdr[i].sh_type == SHT_STRTAB) {
      strtab = i;
      break;
    }
  }
  if (symtab == -1 || strtab == -1) {
    Log("[Ftrace - Warning] ELF file doesn't have a symtab or a strtab.");
    return;
  }
  // Read .symtab
  fseek(elf_fp, shdr[symtab].sh_offset, SEEK_SET);
  if (fread(sym, 1, shdr[symtab].sh_size, elf_fp) == 0) {
    Log("[Ftrace - fread] Error occors while reading .symtab.");
  }
  num_sym = shdr[symtab].sh_size / shdr[symtab].sh_entsize;
  /*
  printf("%d\n", num_sym);
  for (int i = 0; i < num_sym; ++i) {
    printf("%016lx\n", sym[i].st_value);
  }
  */
  // Read .strtab
  fseek(elf_fp, shdr[strtab].sh_offset, SEEK_SET);
  if (fread(strtable, 1, shdr[strtab].sh_size, elf_fp) == 0) {
    Log("[Ftrace - fread] Error occors while reading .strtab.");
  }
}

char *ftrace_search(uint64_t addr, bool is_return) {
  for (int i = 0; i < num_sym; ++i) {
    // Check if it is FUNC
    if (ELF64_ST_TYPE(sym[i].st_info) != STT_FUNC) continue;
    // Match address
    // printf("%016lx %016lx\n", sym[i].st_value, addr);
    if (sym[i].st_value <= addr && addr < sym[i].st_value + sym[i].st_size) {
      // printf("[Ftrace - Test]: ");
      // puts(strtable + sym[i].st_name);
      return strtable + sym[i].st_name;
    }
  }
  return notfound;
}

void ftrace_record(uint64_t pc, uint64_t addr, bool is_return) {
  // printf("%016lx %016lx\n", pc, addr);
  char *pt = ftrace_search(addr, is_return);
  if (pt != notfound) {
    elf_ret[num_ret].pc = pc;
    elf_ret[num_ret].addr = addr;
    elf_ret[num_ret].name = pt;
    elf_ret[num_ret++].is_return = is_return;
  }
}

void ftrace_output() {
  int ident = -2;
  for (int i = 0; i < num_ret; ++i) {
    printf("0x%016lx: ", elf_ret[i].pc);
    if (!elf_ret[i].is_return) ident += 2;
    for (int j = 0; j < ident; ++j) putchar(' ');
    if (!elf_ret[i].is_return) {
      printf("call [%s@0x%016lx]\n", elf_ret[i].name, elf_ret[i].addr);
    } else {
      printf("ret [%s]\n", elf_ret[i].name);
      ident -= 2;
    }
  }
}
