/**
 *  Program 2
 *  Finds prime numbers within range.
 *  CS320-1
 *  9/24/18
 *  @author  Karl Parks cssc0548
 */

//Info for Program 2
//location on karl's computer: cd Documents\GitHub\CS320\p2
//run code using: gcc -o p2 p2.c
//Tranfer Files using Putty: pscp C:\Users\KarlP\Documents\GitHub\CS320\p2\p2.c cssc0548@edoras.sdsu.edu:/home/cs/pkraft/cssc0548/test/prog2test

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function for checking input is a normal positive integer
//function obtained from stack overflow question
int numbers_only(const char *s) {
  while (*s) {
      if (isdigit(*s++) == 0) return 0;
  }
  return 1;
}

//returns next prime in the array
int grabNextPrime(int mult, int length, int (*pa)[]) {
  //loop?
  int val = mult+1;
  int i = val;
  int stop = length/2;
  for (i = val; i < stop; i++) {
    if ((*pa)[i]==0) {
      return i;
    }
  }
  return 0;
}

//marks all multiples in the array
void markMult(int mult, int length, int (*pa)[]) {
  int i = 0;
  for (i = mult; i < length - mult; i = i + mult){
    int j = i + mult;
    (*pa)[j] = 1;
    //printf("Element Marked: %d\n",j);
    //printf("Elemnet Contents: %d\n", (*pa)[j]);
  }
  return;
}

//take in Arguments from command line
void main(int argc, char *argv[]) {
  //Hello
  //printf("Hello Karl, Beginning Program\n");

  //validate input
  char invalid[15] = "Invalid input";
  //printf("%d\n", argc);
  //printf("%s\n",  argv[1]);
  if (argc == 1 | argc > 2) { //validate number of inputs
    printf("%s\n", invalid);
    return;
  }
  else if (!numbers_only(argv[1])) { //valid numbers, no doubles, no lettes, no decimals, no negative
    printf("%s\n", invalid);
    return;
  }
  else if (atoi(argv[1]) > 999) { //valid range
    printf("%s\n", invalid);
    return;
  }
  else {
    //printf("Valid Input\n");
  }
  //Other tests: out-of-range, test boundaries?

  //allocate array at the size of n
  int n = atoi(argv[1]);
  int array[n+1];
  memset(array, 0, sizeof array);
  int size = sizeof(array)/sizeof(array[0]);
  int mymult = 2;
  int i = 0;
  int nextMult = 0;
  int stop = size/2;
  //i = mymult;

  //mark all multiples of primes
  for (i = mymult; i < stop; i = nextMult) {
    //printf("Prime: %d\n", i);
    markMult(i, size, &array);
    nextMult = grabNextPrime(i, size, &array);
    if (nextMult==0){
      break;
    }
  }

  //print my Info and 2 newlines
  printf("Program #2, cssc0548, Karl Parks\n\n");

  //print what we found
  printf("Prime numbers in the range 2..%d are:\n", n);
  //int i = 0;
  for (i = 2; i < size; i++) {
    if (array[i]==0) {
      printf("%d ", i);
    }
  }
  printf("\n");
  //Prime numbers in the range 2..59 are:
  //2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59
  //printf("Reached End Of Program\n");
  return;
}
