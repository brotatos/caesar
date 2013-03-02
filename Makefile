CC=gcc
CFLAGS=-Wall -std=c99

all: cipher

cipher: cipher.o

clean:
	$(RM) *.o cipher

.PHONY: clean all
