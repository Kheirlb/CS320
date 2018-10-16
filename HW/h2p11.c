#include <stdio.h>
#include <stdlib.h>

void foo(int **, int *, int *);

int main(void) {
    int x=2, y=4;
    int *A=&x, *B=&y, C=2;
    printf("\nPointer\n");
    printf("&x %p\n", &x);
    printf("&y %p\n", &y);
    printf("&A %p\n", &A);
    printf("&B %p\n", &B);
    printf("&C %p\n", &C);
    foo(&A, B, &C);
    return(EXIT_SUCCESS);
}

void foo(int **a, int *b, int *c) {
  printf("\nPointer\n");
  printf("**a %p\n", **a);
  printf("*a %p\n", *a);
  printf("a %p\n", a);
  printf("&a %p\n", &a);
  printf("*b %p\n", *b);
  printf("b %p\n", b);
  printf("&b %p\n", &b);
  printf("*c %p\n", *c);
  printf("c %p\n", c);
  printf("&c %p\n", &c);
  printf("\nInteger\n");
  printf("**a %d\n", **a);
  printf("*a %d\n", *a);
  printf("a %d\n", a);
  printf("&a %d\n", &a);
  printf("*b %d\n", *b);
  printf("b %d\n", b);
  printf("&b %d\n", &b);
  printf("*c %d\n", *c);
  printf("c %d\n", c);
  printf("&c %d\n", &c);
  return;
}
