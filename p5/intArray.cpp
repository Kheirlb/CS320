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
    cout << "Array declared with illegal array bounds" << endl;
    //return;
    hi = i;
    lo = j;
    size = 0;
    pA = new int[size];
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
  for (int i = 0; i <= size; i++) {
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
  //int adjust = (constArray.lo - lo);
  int mybool = 1;
  if (size == constArray.size) {
    for (int i = 0; i < size; i++) {
      if (pA[i] == constArray.pA[i]) {
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
  //int adjust = (constArray.lo - lo);
  int mybool = 0;
  if (size == constArray.size) {
    for (int i = 0; i < size; i++) {
      if (pA[i] != constArray.pA[i]) {
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
  int trueIndex = i-lo;
  //return pA[i-lo];
  if (i<lo || i>hi) {
    cout << "Array Index Out of Range" << endl;
    //csis << "Array Index Out of Range" << endl;
    return pA[lo];
  }
  else {
    return pA[trueIndex];
  }
  //cout << "Enf of Function" << endl;
}

IntArray& IntArray::operator=(const IntArray& constArray) {
  //cout << "= operator" << endl;
  //int adjust = (constArray.lo - lo);
  /*
  size = constArray.size;
  // hi = constArray.hi;
  // lo = constArray.lo;
  pA = new int[size]();
  cout << "new int ran" << endl;*/
  if (size == constArray.size) {
    for (int i = 0; i < constArray.size; i++) {
      pA[i] = constArray.pA[i];
    }
    return *this;
  }
  return *this;
}

IntArray IntArray::operator+(const IntArray& constArray) {
  //cout << "Began + Operator " << endl;
  // int adjust = (constArray.lo - lo); //4-1=3
  // cout << "Adjust 1: " << adjust << endl;
  // int adjust2 = (constArray.lo - 0); //4
  // cout << "Adjust 2: " << adjust2 << endl;
  // int adjust3 = (lo - 0); //1
  // cout << "Adjust 3: " << adjust3 << endl;
  // int myHi = constArray.hi;
  // iny myLo = constArray.lo;
  IntArray c(size);
  //cout << "Allocated mypA" << endl;
  for (int i = 0; i < size; i++) {
    // cout << "c index 0?: " << i << endl;
    // cout << "a index 1?: " << i+lo << endl;
    // cout << "b index 4?: " << i+constArray.lo << endl;
    //cout << "a[" << i+lo << "]: " << pA[i+lo] << endl;
    //cout << "b[" << i+constArray.lo << "]: " << constArray.pA[i+constArray.lo] << endl;
    c[i] = pA[i] + constArray.pA[i];
  }
  return c;
}

IntArray& IntArray::operator+=(const IntArray& constArray) {
  for (int i = 0; i < size; i++) {
    pA[i] += constArray.pA[i];
  }
  return *this;
}

ostream& operator<<(ostream& os, const IntArray& array) {
  for(int i = 0; i < array.size; i++) {
    os << array.name << "[" << array.lo+i << "] = " << array.pA[i] << endl;
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
