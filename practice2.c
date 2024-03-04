#include <stdio.h>
int A(int k ) {
   printf("Function A:%d \n",k) ;
   return(1) ;
}
int B(int k ) {
   printf("Function B:%d \n",k) ;
   return(1) ;
}
char X[13] ; 
int main() 
{
  char *s1 ; 
  char *s2 ; 
  char **t ; 
  int (*f[4])(int) ; 

  s1 =  X ; 
  s2 = (X + 5) ; 
  f[0] = A ; 
  f[1] = B ; 
 
  printf("size of s1: %ld\n", sizeof(s1));
  printf("size of t: %ld\n", sizeof(t));
  printf("size of *t: %ld\n", sizeof(*t));
  printf("value of s2-s1: %ld\n", s2-s1); // difference is 5 (char array)
  printf("size of f: %ld\n", sizeof(f));
  printf("size of f[0]: %ld\n", sizeof(f[0]));
  printf("X: \t\t\t %p\n", X);
  printf("X + 5: \t\t\t %p\n", X+5);

}
