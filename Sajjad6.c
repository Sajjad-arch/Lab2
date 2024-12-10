#include<stdio.h>
#include <limits.h>



int main(void)


{
   int anInteger;
   unsigned aUnsignedInteger;
   short int aShortInteger;
   unsigned short int aUnsignedShortInteger;
   long int aLongInteger;
   unsigned long int aUnsignedLongInteger;
   long long int aLongLongInteger;
   unsigned long long aUnsignedLongLongInteger;


   printf("Size of Integer: %d bytes\n", sizeof(anInteger));
   printf("Size of Unsigned  Integer :%d bytes\n", sizeof(aUnsignedInteger));
   printf("Size of short Integer: %d bytes\n", sizeof(aShortInteger));
   printf("Size of Unsigned short Integer :%d bytes\n", sizeof(aUnsignedShortInteger));
   printf("Size of Long Integer: %d bytes\n", sizeof(aLongInteger));
   printf("Size of Unsigned Long Integer :%d bytes\n", sizeof(aUnsignedLongInteger));
   printf("Size of Long Long Integer: %d bytes\n", sizeof(aLongLongInteger));
   printf("Size of Unsigned Long Long Integer :%d bytes\n", sizeof(aUnsignedLongLongInteger));










    return 0;
}
