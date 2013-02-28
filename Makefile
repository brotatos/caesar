CC=gcc
CFLAGS=-Wall -std=c99

all: cipher_test

cipher_test: cipher_test.o cipher.o

clean:
	$(RM) *.o cipher_test

.PHONY: clean all
