#include <iostream>
#include "intArray.h"
using namespace std;

//cd Documents\GitHub\CS320\p5

class IntArray {
private:
	const char* name;       // array's name
	int* pA;                // dynamic array
	int size;               // size of array
	int hi;                 // largest index
	int lo;                 // smallest index
public:
	// Overloaded ctors
	IntArray();                         // IntArray z
	IntArray(int);                     // IntArray y(size)
	IntArray(int, int);                 // IntArray x(lowerIndex,upperIndex)
	IntArray(const IntArray&);          // IntArray w(anotherIntArray)
	~IntArray();                        // Destructor

	// Overloaded operators
	int operator==(const IntArray&);
	int operator!=(const IntArray&);
	int& operator[] (int);
	IntArray& operator=(const IntArray&);
	IntArray operator+(const IntArray&);
	IntArray& operator+=(const IntArray&);
	friend ostream& operator<<(ostream&, const IntArray&);

	// Helper functions
	void setName(char *name);
	void getName();
	int  high();
	int  low();
};

void IntArray::IntArray() {
	cout << "Constructor" << endl;
	//pA = new int(10);
	//do not make a static array in Constructor
}

void IntArray::IntArray(int) {
	cout << "Doesn't Work" << endl;
}