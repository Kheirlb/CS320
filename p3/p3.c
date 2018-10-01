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
  if (!(fp = fopen(filename, "r"))) {
    printf("File Does Not Exist\n");
    return;
  }
  printf("Filename: %s\n", filename);
  fclose(fp);
}

void print_matrix(int *matrix, int m, int p){

}

void mult_matrices(int *A, int *B, int *C, int m, int n, int p){

}

int main(int argc, char *argv[]) {
  printf("Program #2, cssc0548, Karl Parks\n\n");
  /* read file and check if file exists */
  char invalid[15] = "Invalid input";
  if (argc == 1 | argc > 2) { /* validate number of inputs */
    printf("%s\n", invalid);
    return;
  }
  char *filename = argv[1];

  /* declare some variables */
  int **A; /* input matrix */
  int **B;
  int **C;
  int *m;
  int *n;
  int *p;

  /* read matrics */
  /* read_matrices(&A, &B, &C, &m, &n, &p, &filename); */
  printf("A: %x\n", A);
  printf("B: %x\n", B);
  printf("C: %x\n", C);
  printf("m: %x\n", m);
  printf("n: %x\n", n);
  printf("p: %x\n", p);
  printf("Filename: %x\n", filename);
  /*  */
  printf("End of Program\n");
  return 0;
}
