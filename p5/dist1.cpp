#include <iostream>
#include "dist1.h"
using namespace std;
void Distance::setDist(int ft, float in) {
 feet = ft;
 inches = in;
}
void Distance::getDist() {
 cout << "feet: ";
 cin >> feet;
 cout << "inches: ";
 cin >> inches;
}
void Distance::showDist() {
 cout << feet << "' " << inches << "\"";
}
