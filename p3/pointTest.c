#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello Karl\n");

  //normal pointer stuff (no arrays)
  int a;
  int *p; //p is now a pointer to an int
  int *p2;
  a = 100;
  p = &a; //reference a and assign memory address to p
  p2 = &a;
  printf("Value of a: %d\n", a);   //the valur of a
  printf("Value of &a: %p\n", &a); //memort address of a, address-of
  printf("Value of p: %p\n", p);   //p, which contains the stored memory addres of a
  printf("Value of &p: %p\n", &p); //memory address of p, address-of
  printf("Value of *p: %d\n", *p); //dereferences p
  printf("Value of p2: %p\n", p2); //dereferences p

  //array stuff
  int array0[5] = {1,2,3,4,5};
  /*char **array1 = {"hello","karl"};*/
  char *array2[2] = {"hello","jesus"};
  int array3[2][4] = {{1,2,3,4},{5,6,7,8}};
  int array4[1][2];
  *(*(array4)) = 121;
  int **array5; //a pointer to a pointer
  *array5 = malloc(2*4*sizeof(int));
  *(*(array5)) = 621;

  printf("Value of Array0: %d\n",*(array0+1));
  printf("Value of Array3: %d\n", array3[1][0]);
  printf("Value of Array3: %d\n", *(*(array3+1)+0));
  printf("Value of Array3: %p\n", &array3);
  printf("Value of Array3: %d\n\n", *(*(array3)));
  printf("Value of Array4: %d\n\n", *(*(array4)));
  printf("Value of Array5: %d\n", *(*(array5+0)+0));
  printf("Address of Array5: %p\n", array5);
  printf("Address of Array5: %p\n", *(array5));
  printf("Value of Array5: %d\n", *(*(array5)));

  return 0;
}
