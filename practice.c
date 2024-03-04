#include <stdio.h>

int A(int k ) {
   printf("Function A:%d \n",k) ;
   return(1) ;
}

int B(int k ) {
   printf("Function B:%d \n",k) ;
   return(1) ;
}

int X[13]  = {112312, 2123123, 3123123, 41231231, 5123123, 6123123, 7123123, 8}; 
// int X[13]  = {1, 2, 3, 4, 5, 6, 7, 8}; 

int main() 
{
  int  *p ; 
  int  *q ; 
  void *v1 ; 
  void *v2 ; 
  char *s1 ; 
  char *s2 ; 
  char **t ; 
  int (*f[4])(int) ; 

  p = X ;
  q = X+5 ; 
  v1 = X ;
  v2 = X+5 ; 
  s1 = (char *) X ; 
  s2 = (char *) (X + 5) ; 
  f[0] = A ; 
  f[1] = B ; 
  printf("p vs s1: %p %p\n", p, s1);
  printf("q vs s2: %p %p\n", q, s2);
  printf("\n");


  // printf("value at location pointed by p:  %d\n", *p);
  // printf("value at location pointed by q:  %d\n", *q);
  // printf("value at location pointed by s1:  %d\n", *s1);
  // printf("value at location pointed by s2:  %d\n", *s2);
  // printf("\n");


  printf("size of p: %ld\n", sizeof(p));
  printf("size of q: %ld\n", sizeof(q));
  printf("size of v1: %ld\n", sizeof(v1));
  printf("size of s1: %ld\n", sizeof(s1));
  printf("size of t: %ld\n", sizeof(t));
  printf("size of *t: %ld\n", sizeof(*t));
  printf("value of q-p: %ld\n", q-p);  
  printf("%ld\n", (char *) (X + 5)  - (char *) X);
  printf("value of s2-s1: %ld\n", s2-s1); 
  printf("size of f: %ld\n", sizeof(f));
  printf("size of f[0]: %ld\n", sizeof(f[0]));
  printf("\n");

  printf("X: \t\t\t %p\n", X);
  printf("X + 5: \t\t\t %p\n", X+5);
}
