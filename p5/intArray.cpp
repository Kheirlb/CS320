#include <iostream>
#include "intArray.h"
using namespace std;

IntArray::IntArray() {
  cout << "Constructor Ran" << endl;
}

IntArray::IntArray(int i) {
  cout << "Created New Array of Size: " << i << endl;
  size = i;
  pA = new int[size]();
  hi = size - 1;
  lo = 0;
  //do not make a static array in Constructor
}

IntArray::IntArray(int i, int j) {
  cout << "IntArray int int" << endl;
}

IntArray::IntArray(const IntArray& constArray) {
  cout << "IntArray&" << endl;
}

IntArray::~IntArray() {
  cout << "Destructor" << endl;
  //pA = new int(10);
  //do not make a static array in Constructor
}

int& IntArray::operator[](int i) {
  return pA[i];
}

ostream& IntArray::operator<<(ostream&, const IntArray& array) {
  //os << d.feet << “\’ “ << d.inches << ‘\”’;
  for(int i = array.low(); i <= array.high(); i++) {
      cout << array[i] << endl;
  }
  return os;
}

void IntArray::setName(char* thename) {
  name = (char *)thename;
}

void IntArray::getName() {
  cout << "getName is: " << name << endl;
}

int IntArray::high(void) {
  return hi;
}

int IntArray::low(void) {
  return lo;
}
