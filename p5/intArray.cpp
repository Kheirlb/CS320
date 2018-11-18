#include <iostream>
#include "intArray.h"
using namespace std;

IntArray::IntArray(): size(10), hi(9), lo(0), pA(new int[10]()) {
  //: size(10), hi(9), lo(0), pA(new int[10]())
  cout << "Constructor Ran" << endl;
}

IntArray::IntArray(int i) {
  //cout << "Created New Array of Size: " << i << endl;
  size = i;
  pA = new int[size]();
  hi = size - 1;
  lo = 0;
}

IntArray::IntArray(int i, int j) {
  if (i <= j) {
    hi = j;
    lo = i;
    size = (j-i)+1;
    cout << "Something 1" << endl;
    pA = new int[size]();
    cout << "Something 2" << endl;
  }
  else {
    cout << "Low Index is not Below High Index" << endl;
  }
}

IntArray::IntArray(const IntArray& constArray) {
  cout << "IntArray&" << endl;
  size = constArray.size;
  hi = constArray.hi;
  lo = constArray.lo;
  cout << "Something 1" << endl;
  cout << "Size: " << size << endl;
  pA = new int[size]();
  cout << "Something 2" << endl;
  for (int i = lo; i <= hi; i++) {
    pA[i] = constArray.pA[i];
  }
}

IntArray::~IntArray() {
  cout << "Destructor" << endl;
  //delete [] pA;
  //pA = NULL;
}

//added "const"
int& IntArray::operator[](int i) const {
  return pA[i];
}

IntArray& IntArray::operator=(const IntArray& constArray) {
  cout << "= operator" << endl;
  // size = constArray.size;
  // hi = constArray.hi;
  // lo = constArray.lo;
  // pA = new int[size]();
  for (int i = lo; i <= hi; i++) {
    pA[i] = constArray.pA[i];
  }
}

ostream& operator<<(ostream& os, const IntArray& array) {
  for(int i = array.lo; i <= array.hi; i++) {
    os << array.name << "[" << i << "] = " << array[i] << endl;
  }
  return os;
}

void IntArray::setName(const char* thename) {
  name = thename;
}

void IntArray::getName() {
  if (name != NULL)
		cout << name << endl;
	else
		cout << "No name specified." << endl;
}

int IntArray::high(void) {
  return hi;
}

int IntArray::low(void) {
  return lo;
}
