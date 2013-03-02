#include "caeser.h"

// encrypt() shifts the characters forward by the amount specified by numShift
void encrypt(int argc, char *argv[])
{
   int numShift;
   int j;
   char *elements;

   numShift = atoi(argv[2]);
   elements = argv[3];

   for (j = 0; j < strlen(elements); j++)
   {
      if (elements[j] >= 'A' && elements[j] <= 'M')
      {
         printf("%c", elements[j] + numShift);
      }
      else if (elements[j] >= 'N' && elements[j] <= 'Z')
      {
         printf("%c", elements[j] - numShift);
      }
      else if (elements[j] >= 'a' && elements[j] <= 'm')
      {
         printf("%c", elements[j] + numShift);
      }
      else if (elements[j] >= 'n' && elements[j] <= 'z')
      {
         printf("%c", elements[j] - numShift);
      }
      else
      {
         printf("%c", elements[j]);
      }
   }
}

// decrypt() shifts the characters backward by the amount specified by numShift
void decrypt(int argc, char *argv[])
{
   int numShift;
   int j;
   char *elements;

   numShift = atoi(argv[2]);
   elements = argv[3];

   for (j = 0; j < strlen(elements); j++)
   {
      if (elements[j] >= 'A' && elements[j] <= 'M')
      {
         printf("%c", elements[j] - numShift);
      }
      else if (elements[j] >= 'N' && elements[j] <= 'Z')
      {
         printf("%c", elements[j] + numShift);
      }
      else if (elements[j] >= 'a' && elements[j] <= 'm')
      {
         printf("%c", elements[j] - numShift);
      }
      else if (elements[j] >= 'n' && elements[j] <= 'z')
      {
         printf("%c", elements[j] + numShift);
      }
      else
      {
         printf("%c", elements[j]);
      }
   }
}
