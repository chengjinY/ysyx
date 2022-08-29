#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (int i = 0; i < len; ++i) {
    putch(*(char *)(buf + i));
  }
  return len;
}

inline int min(int a, int b) {
  return a < b ? a : b;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd;
  ioe_read(AM_INPUT_KEYBRD, &kbd);
  if (kbd.keycode == 0) return 0;
  char *s = (char *)buf;
  for (int i = 0; i < min(len, 3); ++i) {
    if (i == 0) s[i] = 'k';
    else if (i == 2) s[i] = ' ';
    else if (kbd.keydown == true) s[i] = 'd';
    else s[i] = 'u';
  }
  int slen = sizeof(keyname[kbd.keycode]);
  for (int i = 3, j = 0; i < len && j < slen; ++i, ++j) {
    s[i] = keyname[kbd.keycode][j];
  }
  // no '\n' here cause we only consider one event, multiple events may cause errors
  // backslash, tab, ... have a strange blank line if we add '\n' here, to be considered
  s[min(slen + 3, len)] = '\0';
  return min(slen + 3, len);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
