#ifndef CIPHER_H
#define CIPHER_H

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void encrypt();
void decrypt();
void printUsage();
void checkArgs(int argc, char *argv[]);
char checkShift(char c, int numShift);

#endif
