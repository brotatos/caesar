#include "cipher.h"

int main(int argc, char *argv[])
{
   if (atoi(argv[1]) == 'e')
   {
      encrypt(argc, argv);
   }
   else if (atoi(argv[1]) == 'd')
   {
   }
   else
   {
      //print usage
      exit(0);
   }
   return 0;
}

