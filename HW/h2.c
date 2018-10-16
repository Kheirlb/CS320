#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("Starting Homework 2 Test Program\n");
  //int a=2, b=4, c=6; //cases 1-9
  int a=2, b=5, c=9; //cases 12-17
  int *f = &a;
  int answer;

  int oper = 0;
  oper = atoi(argv[1]);
  switch(oper) {
    case 1:
      printf("Case: %d\n", oper);
      answer = c/b/a;
      break;
    case 2:
      printf("Case: %d\n", oper);
      answer = a++ +b++ +c++;
      break;
    case 3:
      printf("Case: %d\n", oper);
      answer = a - ++b - ++c;
      break;
    case 4:
      printf("Case: %d\n", oper);
      answer = a *= *f;
      break;
    case 5:
      printf("Case: %d\n", oper);
      answer = a += b += c;
      break;
    case 6:
      printf("Case: %d\n", oper);
      answer = b >> 2 ;
      break;
    case 7:
      printf("Case: %d\n", oper);
      answer = a & b;
      break;
    case 8:
      printf("Case: %d\n", oper);
      answer = c % (a | 6);
      break;
    case 9:
      printf("Case: %d\n", oper);
      answer = -a++;
      break;
    case 10: ///problem 2
      printf("\nStart Output of 2\n\n");
      //int i, count, sum;
      //for(i=0, count=10, sum=0; sum += i,printf("i: %d, sum: %d\n",i,sum), i < count; i++);
      printf("\nEnd Output of 2\n");
    case 11: ///problem 5
      printf("\nStart Output of 5\n\n");
      int i;
      int n[10] = {0};

      for(i=0; i < 10; i++)
        printf("Array element n[%d] is: %d\n",i, n[i]);
      printf("\nEnd Output of 5\n");
    case 12:
      printf("Case: %d\n", oper);
      answer = a & b | c;
      break;
    case 13:
      printf("Case: %d\n", oper);
      answer = a ^ b;
      break;
    case 14:
      printf("Case: %d\n", oper);
      //answer = (b &| c);
      printf("FAIL\n");
      break;
    case 15:
      printf("Case: %d\n", oper);
      answer = a + b & c;
      break;
    case 16:
      printf("Case: %d\n", oper);
      answer = a * b | c;
      break;
    case 17:
      printf("Case: %d\n", oper);
      answer = a ^ b ^ a;
      break;
    default :
      printf("Invalid Case\n");
  }

  printf("&a: %p\n", &a);
  printf("f: %p\n", f);
  printf("*f: %d\n", *f); //dereferbce f
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);
  printf("answer: %d\n", answer);
  return 0;
}
