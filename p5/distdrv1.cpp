#include <iostream>
#include "dist1.h"
using namespace std;
int main() {
 Distance d1, d2;
 d1.setDist(11, 6.25);
 d2.getDist();
 cout << endl;
 cout << "d1 = ";
 d1.showDist();
 cout << endl << endl;

 cout << "d2 = ";
 d2.showDist();
 cout << endl << endl;
}
