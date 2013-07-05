#include "cipher.h"

//printUsage
void printUsage() {
      printf("Usage: cipher [-e or -d] <shift> <\"STRING\">\n");
      printf("\tThe string must be enclosed in double quotes.\n");
}
//checkArgs
void checkArgs(int argc, char *argv[]) {
   if (argc < 4) {
      printUsage();
      exit(0);
   } else if (strcmp(argv[1],"-e") == 0 || strcmp(argv[1],"--encrypt") == 0) {
      encrypt(argc, argv);
   } else if (strcmp(argv[1],"-d") == 0 || strcmp(argv[1],"--decrypt") == 0) {
      decrypt(argc, argv);
   } else {
      printUsage();
      exit(0);
   }
}

// encrypt() shifts the characters forward by the amount specified by numShift
void encrypt(int argc, char *argv[]) {
   int numShift;
   int j;
   char *elements;

   numShift = atoi(argv[2]) % 26;
   elements = argv[3];

   for (j = 0; elements[j]; j++) {
      // If the character is uppercase and within the first half of the
      // alphabet, you can simply add to it. Subtracting the character value
      // from the last half of the alphabet would result in the same shift.
      if (elements[j] >= 'A' && elements[j] <= 'M') {
         printf("%c", elements[j] + numShift);
      } else if (elements[j] >= 'N' && elements[j] <= 'Z') {
         printf("%c", elements[j] - numShift);
      // The same method above can be applied in the exact manner for lowercase
      // letters as well.
      } else if (elements[j] >= 'a' && elements[j] <= 'm') {
         printf("%c", elements[j] + numShift);
      } else if (elements[j] >= 'n' && elements[j] <= 'z') {
         printf("%c", elements[j] - numShift);
      } else {
         printf("%c", elements[j]);
      }
   }
}

// decrypt() shifts the characters backward by the amount specified by numShift
void decrypt(int argc, char *argv[]) {
   int numShift;
   int j;
   char *elements;

   numShift = atoi(argv[2]) % 26;
   printf("numShift: %d\n", numShift);
   elements = argv[3];

   for (j = 0; elements[j]; j++) {
      // If the character is uppercase and within the first half of the
      // alphabet, you can simply add to it. Subtracting the character value
      // from the last half of the alphabet would result in the same shift.
      if (elements[j] >= 'A' && elements[j] <= 'M') {
         //printf("%c", elements[j] - numShift);
         printf("%c", checkShiftDecrypt(elements[j], numShift);
      } else if (elements[j] >= 'N' && elements[j] <= 'Z') {
         printf("%c", elements[j] + numShift);
      // The same method above can be applied in the exact manner for lowercase
      // letters as well.
      } else if (elements[j] >= 'a' && elements[j] <= 'm') {
         printf("%c", elements[j] - numShift);
      } else if (elements[j] >= 'n' && elements[j] <= 'z') {
         printf("%c", elements[j] + numShift);
      } else {
         printf("%c", elements[j]);
      }
   }
}

// At this point, numshift has already been modulo'd with 26 and is now being
// passed in.
char checkShiftDecrypt(char c, int numShift) {
   int wrap;
   if (c >= 'A' && c <= 'M') {
       c -= numShift;
       if (c <= 'A') {
          wrap = 'Z' % c;
          return c + wrap;
       }
       return c;
   } else if (c >= 'N' && c <= 'Z') {
      c += numShift;
      return c;
   } else if (c >= 'a' && c <= 'm') {
      c -= numShift;
      return c;
   } else if (c >= 'n' && c <= 'z') {
      c += numShift;
      return c;
   } else {
      return c;
   }
}


// Fix Wrap around error:
// so you normalize them first (the letter values are shifted by a certain
// number)
// then use module to have wraparound
// then add the offset you've removed
// it's quite simple once you visualize it on paper
