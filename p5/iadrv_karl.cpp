// iadrv.cpp - driver program for testing IntArray class
// Provided by instructor for Overloaded Operator lab

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include "iadrv.h"

using namespace std;

ofstream csis;

int main() {
    csis.open("p4.dat");
    test1();
    test2();
    csis.close();
}

void test1() {
    //system("cls");
    cout << "1. Array declared with single integer: IntArray a(10);" << endl << endl;
    csis << "1. Array declared with single integer: IntArray a(10);" << endl << endl;
    IntArray a(10);
    IntArray z;
    for(int i = a.low(); i <= a.high(); i++)
        a[i] = i * 10;
    a.setName("a");
    cout << a << endl;
    csis << a << endl;
    wait();
}

void test2() {
    //system("cls");
    cout << "2. Array declared with two integers: IntArray b(-3, 6);" << endl << endl;
    csis << "2. Array declared with two integers: IntArray b(-3, 6);" << endl << endl;
    IntArray b(-3, 6);
    for(int i = b.low(); i <= b.high(); i++)
        b[i] = i * 10;
    b.setName("b");
    cout << b << endl;
    csis << b << endl;
    wait();
}

void wait() {
    char buf;

    cout << "Press any key to continue." << endl;
    cin.get(buf);
}
