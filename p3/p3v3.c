/**
 *  Program 3
 *  Multiply 2 Matrices from Text File using NO Brackets and print results.
 *  CS320-1
 *  9/30/18
 *  @author  Karl Parks cssc0548
 */

 /**
  *  location on karl's computer: cd Documents\GitHub\CS320\p3
  *  run code using: gcc -ansi -Wall -o p3 p3.c
  *  Tranfer Files using Putty: pscp C:\Users\KarlP\Documents\GitHub\CS320\p3\p3.c cssc0548@edoras.sdsu.edu:/home/cs/pkraft/cssc0548/test/prog3test
  */

#include "p3.h"

/* read from text file */
/* multiple matrices normal with brackets */
/* print statements */
/* multiple matrics uses stars */
/* only 4 functions, main and header */

/* General Notes: */
/* * pointer to a variable */
/* & is the hexidecimal spot of the variable */

void read_matrices(int **A, int **B, int **C,  int *m, int *n, int *p, char *filename){
  FILE *fp;
  fp = fopen(filename, "r");
  if (!fp) {
    printf("File Does Not Exist\n");
    return;
  }
  printf("Opened Filename: %s\n", filename);
  printf("Attempting fscanf\n");
  int rA;
  int cArB;
  int cB;
  printf("Address of m: %p\n", m);
  printf("Attempting fscanf\n");
  fscanf(fp, "%d\n", &rA); /*number of rows in matrix A*/
  fscanf(fp, "%d\n", &cArB); /*number of cols in matrix A and rows in matrix B*/
  fscanf(fp, "%d\n", &cB); /*number of cols matrix B*/
  /* *A = malloc(*m * *n * sizeof(int)); */
  printf("fscanf SUCCEEDED\n");

  *m = rA;
  *n = cArB;
  *p = cB;

  printf("Value of m: %d\n", *m);
  printf("Value of n: %d\n", *n);
  printf("Value of p: %d\n", *p);
  int myintsize = sizeof(int);

  *A = malloc(rA * cArB * myintsize);
  printf("Size of A: %d\n", sizeof(A));
  printf("Malloc A SUCCEEDED\n");

  *B = malloc(cArB * cB * myintsize);
  printf("Size of B: %d\n", sizeof(B));
  printf("Malloc B SUCCEEDED\n");

  int **e;
  e=(int **) malloc(10*sizeof(int *));
  int z;
  for(z=0;z<10;z++)
      *(e+z)=(int *) malloc(20*sizeof(int));

  int **f;
  f=(int **) malloc(10*sizeof(int *));
  for(z=0;z<10;z++)
      *(f+z)=(int *) malloc(20*sizeof(int));

  int i;
  int j;
  int dummy5;
  printf("\nFirst Matrix\n");
  for (i = 0; i < *m; i = i + 1) {
    for (j = 0; j < *n; j = j + 1) {
      fscanf(fp, "%d", &dummy5);
      printf("Scanned Number: %d\n", dummy5);
      printf("Matrix Indices: r: %d c: %d\n",i,j);
      *(*(e+i)+j) = dummy5;
      printf("Matrix Number: %d\n", *(*(e+i)+j));
    }
  }

  printf("\nSecond Matrix\n");
  for (i = 0; i < *n; i = i + 1) {
    for (j = 0; j < *p; j = j + 1) {
      fscanf(fp, "%d", &dummy5);
      printf("Scanned Number: %d\n", dummy5);
      printf("Matrix Indices: r: %d c: %d\n",i,j);
      *(*(f+i)+j) = dummy5;
      printf("Matrix Number: %d\n", *(*(f+i)+j));
    }
  }

  printf("\nPrint Test TWO\n");
  printf("Value of e[0][0]: %d\n", *(*(e+0)+0));
  printf("Value of e[0][1]: %d\n", *(*(e+0)+1));
  printf("Value of f[0][0]: %d\n", *(*(f+0)+0));
  printf("Value of f[1][0]: %d\n", *(*(f+1)+0));

  mult_matrices(*e, *f, *C, *m, *n, *p);

  fclose(fp);
  return;
}

void print_matrix(int *matrix, int m, int p){

}

void mult_matrices(int *A, int *B, int *C, int m, int n, int p){
  printf("\nIn Multiple Matrices\n");
  int valueTest = *B+1; /* col!!!!! */
  /* m = 1 */
  /* n = 2 */
  /* p = 1 */
  printf("Value Test: %d\n", valueTest);
  printf("A[0][0]: %d\n", A[0]);
  printf("A[0][1]: %d\n", A[1]);
  printf("Size Of A: %d\n", sizeof(A));
  printf("B[0][0]: %d\n", B[0]);
  printf("B[1][0]: %d\n", B[22]);
  /* why the hell is 22 my number */
  printf("Value of m: %d\n", m);
  printf("Value of n: %d\n", n);
  printf("Value of p: %d\n", p);

  int z;
  for (z = 0; z < 40; z = z +1) {
    printf("B[1][0]: %d", B[z]);
    printf("\tz: %d\n", z);
  }

  /* A[0] = 1 A[0][0] */
  /* A[1] = 2 A[0][1] */

  /* B[0] = 3 */

  return;
}

int main(int argc, char *argv[]) {
  printf("Program #2, cssc0548, Karl Parks\n\n");
  /* read file and check if file exists */
  char invalid[15] = "Invalid input";
  if ((argc == 1) | (argc > 2)) { /* validate number of inputs */
    printf("%s\n", invalid);
    return 0;
  }
  char *filename = argv[1];

  /* declare some variables */
  int *A; /* input matrix */
  int *B;
  int *C;
  int m;
  int n;
  int p;

  /* check addresses */
  printf("Address of m: %p\n", &m);
  printf("&A: %p\n", &A);
  printf("&B: %p\n", &B);

  read_matrices(&A, &B, &C, &m, &n, &p, filename);
  /* mult_matrices(A, B, C, m, n, p); */

  printf("\nBack in Main\n");
  printf("Address of m: %p\n", &m);
  printf("Value of m: %d\n", m);
  printf("Value of n: %d\n", n);
  printf("Value of p: %d\n", p);


  /*  */
  printf("End of Program\n");
  return 0;
}
