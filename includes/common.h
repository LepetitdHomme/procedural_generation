#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <SDL2/SDL.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

typedef struct {
  int width;
  int height;
  char *text;
} room_t;


int       random_int(int min, int max);
int       generate_text_level(const char *path);

#endif