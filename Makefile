# Makefile
# for SDL:
#   follow https://wiki.libsdl.org/SDL2/Installation
#  clone somewhere else :)
#   git clone https://github.com/libsdl-org/SDL.git -b SDL2
#   cd SDL
#   mkdir build
#   cd build
#   ../configure
#   make
#   sudo make install

CC=gcc
CFLAGS=-I/includes -I/opt/homebrew/Cellar/sdl2/2.30.0/include
LDFLAGS=-L/opt/homebrew/Cellar/sdl2/2.30.0/lib
LIBS=-lSDL2
DEPS = common.h
OBJ = main.o generation.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

play: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBS)

clean:
	rm -f *.o play

re: clean play
