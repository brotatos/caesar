#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void encrypt();
void decrypt();

int main(int argc, char *argv[])
{
   if (argc < 4)
   {
      printf("Usage: cipher [-e or -d] <shift> <\"STRING\">\n");
      printf("\tThe string must be enclosed in double quotes.\n");
      exit(0);
   }
   else if (strcmp(argv[1],"-d") == 0)
   {
      decrypt(argc, argv);
   }
   return 0;
}

void encrypt(int argc, char *argv[])
{
   int num_shift;
   int j;
   char *elements;

   // make argv[1] 'e' or 'd' for encryption/decryption
   // argv[2] is num shift
   // argv[3] is string

   num_shift = atoi(argv[2]);
   elements = argv[3];

   for (j = 0; j < strlen(elements); j++)
   {
      if (elements[j] >= 'A' && elements[j] <= 'M')
      {
         printf("%c", elements[j] + num_shift);
      }
      else if (elements[j] >= 'N' && elements[j] <= 'Z')
      {
         printf("%c", elements[j] - num_shift);
      }
      else if (elements[j] >= 'a' && elements[j] <= 'm')
      {
         printf("%c", elements[j] + num_shift);
      }
      else if (elements[j] >= 'n' && elements[j] <= 'z')
      {
         printf("%c", elements[j] - num_shift);
      }
      else
      {
         printf("%c", elements[j]);
      }
   }

}
void decrypt()
{
   printf("decrypt!");
}
