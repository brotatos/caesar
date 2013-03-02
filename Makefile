CC=gcc
CFLAGS=-Wall -std=c99

all: caesar

caeser: cipher.o caesar.o

clean:
	$(RM) *.o caesar

.PHONY: clean all
