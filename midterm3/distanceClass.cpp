#include <iostream>
using namespace std;

class Distance {
   private:
     int feet;
     float inches;
   public:
     Distance() {} // default ctor
     Distance (int ft, float in) {
       feet = ft; inches = in;
       cout << "Created Distance Object" << endl;
     }
     Distance operator+(Distance d){
        int ft = feet + d.feet;
        float in = inches + d.inches;
        if (in >= 12.0) {
        in -= 12.0;
        ++ft;
        }
        return Distance(ft, in);
     }
     void printDis() {
       cout << "Distance Feet: " << feet << endl;
       cout << "Distance Inches: " << inches << endl;
     }
};

int main() {
  cout << "Hello Distance Class Operator Overloader" << endl;
  Distance d1(3,2);
  Distance d2(4,11);
  Distance d3;
  d3 = d1 + d2;
  d1.printDis();
  d2.printDis();
  d3.printDis();
}
