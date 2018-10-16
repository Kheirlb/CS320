#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("Homework 2 Problem 8\n");
  struct Example {
      int data;
      char *tag;
  };

  struct Example *example;
  //Write the code segment needed to set the data variable to 25, and the tag string to "Hello World".
  int mydata = 25;
  char mytag[20] = "Hello World";
  struct Example myinput;
  myinput.data = mydata;
  myinput.tag = "Hello World";
  example = &myinput;
  printf( "Data variable: %d\n", example->data);
  printf( "Tag string: %s\n", example->tag);
  printf("End of Program\n");
  return 0;
}
