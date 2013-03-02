#include "cipher.h"

int main(int argc, char *argv[])
{
   if (argc < 4)
   {
      printf("Usage: cipher [-e or -d] <shift> <\"STRING\">\n");
      printf("\tThe string must be enclosed in double quotes.\n");
      exit(0);
   }
   else if (strcmp(argv[1],"-e") == 0 || strcmp(argv[1],"-encrypt") == 0)
   {
      encrypt(argc, argv);
   }
   else if (strcmp(argv[1],"-d") == 0 || strcmp(argv[1],"-decrypt") == 0)
   {
      decrypt(argc, argv);
   }

   return 0;
}

// gcc -Wall -std=c99   -c -o caesar.o caesar.c
// gcc   caesar.o   -o caesar
// caesar.o: In function `main':
// caesar.c:(.text+0x7d): undefined reference to `encrypt'
// caesar.c:(.text+0xcd): undefined reference to `decrypt'
// collect2: error: ld returned 1 exit status
// make: *** [caesar] Error 1
