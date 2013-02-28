#include "cipher.h"

char* encrypt(int argc, char *argv[])
{
   int num_shift;
   int j;
   char *elements;

   if (argc < 3)
   {
      printf("Usage: cipher [shift] \"STRING\"\n");
      printf("\tThe final argument must be enclosed in double quotes.\n");
      exit(0);
   }
   // make argv[1] 'e' or 'd' for encryption/decryption
   // argv[2] is num shift
   // argv[3] is string

   num_shift = atoi(argv[2]);
   elements = argv[3];

   for (j = 0; j < strlen(elements); j++)
   {
      if (isalpha(elements[j]))
      {
         if (elements[j] >= 'A' && elements[j] <= 'Z')
         {
            if (elements[j] >= 'A' && elements[j] <= 'M')
            {
               printf("%c", elements[j] + num_shift);
            }
            else
            {
               printf("%c", elements[j] - num_shift);
            }
         }
         else
         {
            if (elements[j] >= 'a' && elements[j] <= 'm')
            {
               printf("%c", elements[j] + num_shift);
            }
            else
            {
               printf("%c", elements[j] - num_shift);
            }
         }
      }
      else
      {
         printf("%c", elements[j]);
      }
   }

   return argv[3];
}
//const char *foobar = "foobar";
//const char *p;
//for (p = foobar; *p != '\0'; ++p)
//{
//    printf("Current letter: %c\n", *p);
//}
//return 0;
//}

/*
 * simplify if statements:
 * if () {}
 * else if () {}
 * else {}
 */
