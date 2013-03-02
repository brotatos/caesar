# caesar - a simple cipher

CC=gcc
CFLAGS=-Wall -std=c99
OUT = cower
VERSION = $(shell git describe)

PREFIX ?= /usr
MANPREFIX ?= $(PREFIX)/share/man

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
DISTFILES = Makefile  README.md  caesar.c  caesar.man  cipher.c  cipher.h

MANPAGES = \
	   caesar.man

all: $(OUT) docs

docs: $(MANPAGES)
caesar.1: caesar.man
	man ./caesar.man >> caesar.1
	gzip caesar.1
	mv caesar.1.gz $(MANPREFIX)/man1/


caesar: cipher.o caesar.o

clean:
	$(RM) *.o caesar

.PHONY: clean all
