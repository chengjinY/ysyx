#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

#define EVENT_BUF_LENGTH 1024
char buf[EVENT_BUF_LENGTH];
int SDL_PollEvent(SDL_Event *ev) {
  if (NDL_PollEvent(buf, EVENT_BUF_LENGTH) == 0) {
    ev->type = SDL_KEYUP;
    ev->key.keysym.sym = 0;
    return 0;
  }
  if (buf[0] == 'k') {
    int code = 0;
    for (int i = 0; i < 83; ++i) {
      if (strncmp(buf + 3, keyname[i], strlen(keyname[i])) == 0) {
        code = i;
        break;
      }
    }
    if (buf[1] == 'd') {
      ev->type = SDL_KEYDOWN;
      ev->key.keysym.sym = code;
      // printf("Down %d\n", code);
    } else if (buf[1] == 'u') {
      ev->type = SDL_KEYUP;
      ev->key.keysym.sym = code;
      // printf("Up %d\n", code);
    }
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  // after keydown and keyup, ret should be zero, and then set keysym to NONE.
  while (SDL_PollEvent(event) == 0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
