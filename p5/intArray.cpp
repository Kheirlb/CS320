/**
     *  Program 5
     *  IntArray Class
     *  CS108-2
     *  11/19/2018
     *  @author  Karl Parks cssc0548
     */

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
    pA = new int[size];
  }
  else {
    cout << "Array declared with illegal array bounds" << endl;
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
  pA = new int[size];
  for (int i = 0; i <= size; i++) {
    pA[i] = constArray.pA[i];
  }
}

IntArray::~IntArray() {
  //cout << "Destructor" << endl;
  delete [] pA;
}

int IntArray::operator==(const IntArray& constArray) {
  int mybool = 1;
  if (size == constArray.size) {
    for (int i = 0; i < size; i++) {
      if (pA[i] == constArray.pA[i]) {
        mybool = 1;
      }
      else {
        mybool = 0;
        break;
      }
    }
  }
  else {
    mybool = 0;
  }
  return mybool;
}

int IntArray::operator!=(const IntArray& constArray) {
  int mybool = 0;
  if (size == constArray.size) {
    for (int i = 0; i < size; i++) {
      if (pA[i] != constArray.pA[i]) {
        mybool = 1;
      }
      else {
        mybool = 0;
        break;
      }
    }
  }
  else {
    mybool = 1;
  }
  return mybool;
}

int& IntArray::operator[](int i) {
  int trueIndex = i-lo;
  if (i<lo || i>hi) {
    cout << "Array Index Out of Range" << endl;
    return pA[lo];
  }
  else {
    return pA[trueIndex];
  }
}

IntArray& IntArray::operator=(const IntArray& constArray) {
  if (size == constArray.size) {
    for (int i = 0; i < constArray.size; i++) {
      pA[i] = constArray.pA[i];
    }
    return *this;
  }
  return *this;
}

IntArray IntArray::operator+(const IntArray& constArray) {
  IntArray c(size);
  for (int i = 0; i < size; i++) {
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
