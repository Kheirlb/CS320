//my c++ script for final

#include <stdio.h>

class karlClass {
  private:
    int karl1;
  public:
    karlClass() {
      karl1 = 4;
    }
    void changeKarl1(int a){
      karl1 = a;
    }
    int getkarl1(void) {
      return karl1;
    }
};

int main(int argc, char *argv[]) {
  //pointer to a character array
  int i = 199;
  printf("i = %d\n", i);

  //Class
  karlClass kC;
  karlClass kC2;
  printf("kC karl1 = %d\n", kC.getkarl1());
  kC.changeKarl1(11);
  printf("Changed kC karl1 to = %d\n", kC.getkarl1());
  printf("kC2 karl1 = %d\n", kC2.getkarl1());
  return 0;
}
