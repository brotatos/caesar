#include "cipher.h"

int main(int argc, char *argv[])
{
   // use a for loop instead?
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
   else
   {
      printf("Usage: cipher [-e or -d] <shift> <\"STRING\">\n");
      printf("\tThe string must be enclosed in double quotes.\n");
      exit(0);
   }

   return 0;
}
