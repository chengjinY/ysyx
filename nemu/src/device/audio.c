#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;

static SDL_AudioSpec s = {};
static int buf_head = -1, buf_size = CONFIG_SB_SIZE;

void audio_play(void *userdata, uint8_t *stream, int len) {
  int i = 0, nlen = len;
  // Log("count: %d", count);
  if (audio_base[reg_count] == 0) return;
  if (audio_base[reg_count] < len) nlen = audio_base[reg_count];
  while (i < nlen) {
    if (buf_head == buf_size) buf_head = 0;
    else ++buf_head;
    stream[i++] = sbuf[buf_head];
    audio_base[reg_count] = audio_base[reg_count] - 1;
  }
  while (i < len) stream[i++] = 0;
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 4);
  switch (offset) {
    case 0:  s.freq = audio_base[reg_freq]; break;
    case 4:  s.channels = audio_base[reg_channels]; break;
    case 8:  s.samples = audio_base[reg_samples]; break;
    case 12: audio_base[reg_sbuf_size] = CONFIG_SB_SIZE; break;
    case 20: break;
    default: break;
  }
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);

  s.format = AUDIO_S16SYS;  // 假设系统中音频数据的格式总是使用16位有符号数来表示
  s.userdata = NULL;        // 不使用
  s.callback = audio_play;
  SDL_InitSubSystem(SDL_INIT_AUDIO);
  SDL_OpenAudio(&s, NULL);
  SDL_PauseAudio(0);
}
