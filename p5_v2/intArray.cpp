#include <iostream>
#include "intArray.h"
using namespace std;

IntArray::IntArray() {
  //: size(10), hi(9), lo(0), pA(new int[10]())
  cout << "Constructor Ran" << endl;
}

IntArray::IntArray(int i) {
  //cout << "Created New Array of Size: " << i << endl;
  size = i;
  pA = new int[size];
  hi = size - 1;
  lo = 0;
}

IntArray::IntArray(int i, int j) {
  if (i <= j) {
    hi = j;
    lo = i;
    size = (j-i)+1;
    pA = new int[size];
  }
  else {
    cout << "Low Index is NOT Below High Index" << endl;
  }
}

IntArray::~IntArray() {
  //cout << "Destructor" << endl;
  delete [] pA;
  //pA = NULL;
}

int& IntArray::operator[](int i) {
  return pA[i];
}

ostream& operator<<(ostream& os, const IntArray& array) {
  for(int i = array.lo; i <= array.hi; i++) {
    os << array.name << "[" << i << "] = " << array.pA[i] << endl;
  }
  return os;
}

void IntArray::setName(const char* thename) {
  name = thename;
}

int IntArray::high(void) {
  return hi;
}

int IntArray::low(void) {
  return lo;
}
