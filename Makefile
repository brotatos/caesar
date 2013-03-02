CC=gcc
CFLAGS=-Wall -std=c99

all: caesar

caesar: cipher.o caesar.o

clean:
	$(RM) *.o caesar

.PHONY: clean all
