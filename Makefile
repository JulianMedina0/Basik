CSRC= src/*.cc
CSRC+= src/Basik/*.cc

ifeq ($(OS), Windows_NT)
	CFLAGS+= -lSDL2main -lSDL2
else
	CFLAGS+= `sdl2-config --cflags --libs`
endif

all: run
compile:
	g++ -o bin/Basik $(CSRC) $(CFLAGS)
run: compile
	bin/Basik
