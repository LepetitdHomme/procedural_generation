#include "includes/common.h"

// char *generate_wall(int size) {
//   char *walls;

//   walls = (char *)malloc(sizeof(char) * size);

//   return walls;
// }

// char *generate_room(int width, int height) {


// }

// returns success or failure
int   generate_text_level(const char *path) {
  FILE *fp; // File pointer

  // Open file for writing ("w" mode)
  fp = fopen(path, "w");
  if (fp == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  // room 1
  room_t room;
  room.width = random_int(10, 30);
  room.height = random_int(10, 30);
  fprintf(fp, "%d.%d\n", room.width, room.height);
  
  //room 1 wall top
  for (int x = 0; x < room.width ; x++) {
    fprintf(fp, "X");
  }
  fprintf(fp, "\n");

  // room 1 middle
  for (int x = 0; x < room.height - 2 ; x++) {
    fprintf(fp, "X");
    for (int y = 0; y < room.width - 2; y++) {
      fprintf(fp, "O");
    }
    fprintf(fp, "X\n");
  }

  // room 1 wall bottom
  for (int x = 0 ; x < room.width ; x++) {
    fprintf(fp, "X");
  }
  fprintf(fp, "\n");

  // Close the file
  fclose(fp);
  return 0;
}
