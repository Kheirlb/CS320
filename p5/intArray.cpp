#include <iostream>
#include "intArray.h"
using namespace std;

IntArray::IntArray(): size(10), hi(9), lo(0), pA(new int[10]) {
  //: size(10), hi(9), lo(0), pA(new int[10]())
  //cout << "Constructor Ran" << endl;
}

IntArray::IntArray(int i) {
  //cout << "Created New Array of Size: " << i << endl;
  size = i;
  pA = new int[size];
  hi = size - 1;
  lo = 0;
}

IntArray::IntArray(int i, int j) {
  //cout << "Running IntArray x(x,x)" << endl;
  if (i <= j) {
    hi = j;
    lo = i;
    size = (j-i)+1;
    //cout << "Something 1" << endl;
    //cout << "Size: " << size << endl;
    pA = new int[size];
    //cout << "Something 2" << endl;
  }
  else {
    cout << "Low Index is not Below High Index" << endl;
  }
}

IntArray::IntArray(const IntArray& constArray) {
  //cout << "IntArray&" << endl;
  size = constArray.size;
  hi = constArray.hi;
  lo = constArray.lo;
  //cout << "Something 1" << endl;
  //cout << "Size: " << size << endl;
  pA = new int[size];
  //cout << "Something 2" << endl;
  for (int i = lo; i <= hi; i++) {
    pA[i] = constArray.pA[i];
  }
}

IntArray::~IntArray() {
  //cout << "Destructor" << endl;
  delete [] pA;
  //pA = NULL;
}

int IntArray::operator==(const IntArray& constArray) {
  //cout << "Operator ==" << endl;
  int adjust = (constArray.lo - lo);
  int mybool = 1;
  if (size == constArray.size) {
    for (int i = lo; i <= hi; i++) {
      if (pA[i] == constArray.pA[i+adjust]) {
        mybool = 1;
      }
      else {
        //cout << "Indexed Numbers Do Not Match ";
        mybool = 0;
        break;
      }
    }
  }
  else {
    //cout << "Array Sizes Don't Match! " << endl;
    mybool = 0;
    //break;
  }
  return mybool;
}

int IntArray::operator!=(const IntArray& constArray) {
  int adjust = (constArray.lo - lo);
  int mybool = 0;
  if (size == constArray.size) {
    for (int i = lo; i <= hi; i++) {
      if (pA[i] != constArray.pA[i+adjust]) {
        mybool = 1;
      }
      else {
        //cout << "Indexed Numbers Do Not Match ";
        mybool = 0;
        break;
      }
    }
  }
  else {
    //cout << "Array Sizes Don't Match! " << endl;
    mybool = 1;
    //break;
  }
  return mybool;
}

int& IntArray::operator[](int i) {
  //cout << "Ran [] Operator, i: " << i << endl;
  return pA[i];
}

IntArray& IntArray::operator=(const IntArray& constArray) {
  //cout << "= operator" << endl;
  int adjust = (constArray.lo - lo);
  /*
  size = constArray.size;
  // hi = constArray.hi;
  // lo = constArray.lo;
  pA = new int[size]();
  cout << "new int ran" << endl;*/
  for (int i = lo; i <= hi; i++) {
    pA[i] = constArray.pA[i+adjust];
  }
  return *this;
}

IntArray IntArray::operator+(const IntArray& constArray) {
  int adjust = (constArray.lo - lo);
  int adjust2 = (constArray.lo - 0);
  int adjust3 = (lo - 0);
  // int myHi = constArray.hi;
  // iny myLo = constArray.lo;
  int mySize = constArray.size;
  int* mypA = new int[mySize];
  for (int i = 0; i <= size; i++) {
    mypA[i] = pA[i+adjust3] + constArray.pA[i+adjust+adjust2];
  }
  return *this;
}

IntArray& IntArray::operator+=(const IntArray& constArray) {
  return *this;
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
