CC = gcc
CFLAGS = -O2 -fomit-frame-pointer -fexpensive-optimizations -flto -march=native -std=c17 -Wformat-security -Warray-bounds -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -pedantic -Wfatal-errors -Wextra -Wall
ODIR = obj
VPATH = ./src

all: server_main.c signal.c rng.c
	$(CC) -o ../bin/tesla-server server_main.c signal.c rng.c

clean:
	rm -f *.o ../bin/tesla-server
