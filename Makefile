# caesar - a simple cipher

CC=gcc
CFLAGS=-Wall -std=c99
OUT = caesar
VERSION = $(shell git describe)

PREFIX ?= /usr/local
MANPREFIX ?= $(PREFIX)/share/man

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
DISTFILES = Makefile  README.md  caesar.c  caesar.man  cipher.c  cipher.h

MANPAGES = \
	   caesar.1 \

all: $(OUT) docs

docs: $(MANPAGES)
caesar.1: caesar.man
	man ./caesar.man >> caesar.1
	gzip caesar.1

caesar: cipher.o caesar.o

clean:
	$(RM) $(OUT) $(OBJ) $(MANPAGES) *.gz

.PHONY: clean docs all
