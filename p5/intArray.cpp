#include <iostream>
#include "intArray.h"
using namespace std;

//cd Documents\GitHub\CS320\p5

IntArray::IntArray(void) {
  cout << "Constructor" << endl;
  //pA = new int(10);
  //do not make a static array in Constructor
}

IntArray::IntArray(int i) {
  cout << "Doesn't Work" << endl;
}
