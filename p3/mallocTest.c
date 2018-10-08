#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello Karl\n");

  int **a;
  a=(int **) malloc(10*sizeof(int *));
  int i;
  for(i=0;i<10;i++)
      *(a+i)=(int *) malloc(20*sizeof(int));

  int **b;
  b=(int **) malloc(10*sizeof(int *));
  for(i=0;i<10;i++)
      *(b+i)=(int *) malloc(20*sizeof(int));

  a[0][0] = 121;
  b[0][0] = 33;
  printf("a[0][0]: %d\n", a[0][0]);
  printf("b[0][0]: %d\n", b[0][0]);
  printf("a[0][0]: %d\n", a[0][0]);
  return 0;
}
