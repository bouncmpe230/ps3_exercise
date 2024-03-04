#include <stdio.h>
#define N 50

int main(){
   int x = N;
   int y, z, t;
   
   y = 85;         /* decimal */
   z = 0213;       /* octal */
   t = 0x4b;    /* hexadecimal */
   
   float a;
   double b;
   a = 3.14159;
   b = 314159E-5L; /* Exponent: 314159 x 10^-5*/
   
   char ch = 'a';

   // Integers
   printf("value of x: %d size of x: %ld\n", x, sizeof(x));
   printf("value of y: %d size of y: %ld\n", y, sizeof(y));
   printf("value of z: %d size of z: %ld\n", z, sizeof(z));
   printf("value of t: %d size of t: %ld\n", t, sizeof(t));
   // Floats
   printf("value of a: %f size of a: %ld\n", a, sizeof(a));
   printf("value of b: %lf size of y: %ld\n", b, sizeof(b));
   // Character
   printf("value of ch %c, %d size of ch %ld\n", ch, ch, sizeof(ch));
   return 0;
}
