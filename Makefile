CC = gcc
CFLAGS = -O2 -march=native -Wformat-security -Warray-bounds -Wall
ODIR = obj
VPATH = ./src

all: server_main.c signal.c rng.c
	$(CC) -o ../tesla-server server_main.c signal.c rng.c

clean:
	rm -f *.o ../tesla-server
