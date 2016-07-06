.PHONY: all clean nuke

all: game.elf

clean:
	rm -vf *.o

nuke: clean
	rm -vf *.elf

OFILES=\
	main.o\

LIBS=\
	-lSDL2\
	-lSDL2_image\

game.elf: $(OFILES)
	$(CC) -o $@ $^ $(LIBS)
