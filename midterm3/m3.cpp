#include <iostream>
#include "batteryInfoClass.h"
using namespace std;

struct battery {
  string name;
  int cells;
  int capacity;
  int discharge;
} bat1, bat2;

void printBattery(battery bat);

int main() {
  cout << "Hello Midterm 3 Cram Session" << endl;

  //structure stuff
  bat1.name = "Battery 1";
  bat1.cells = 3;
  bat1.capacity = 2200;
  bat1.discharge = 40;
  bat2.name = "Battery 2";
  bat2.cells = 4;
  bat2.capacity = 3400;
  bat2.discharge = 20;
  //printBattery(bat1);
  //printBattery(bat2);


  //Class stuff
  batteryInfo bat1info;
  bat1info.print_data1_constructorVal();
  bat1info.print_data1();
  string grabbedSomeInfo;
  grabbedSomeInfo = bat1info.getInfo(" about Satan");
  cout << "My Grabbed Info: " << grabbedSomeInfo << endl;
  //bat1info.data1 = 3; //private, will not work

}

void printBattery(battery bat) {
  cout << "Battery Name: \t\t\t" << bat.name << endl;
  cout << "Voltage of Battery: \t\t" << bat.cells * 3.7  << " V" << endl;
  cout << "Capacity of Battery: \t\t" << bat.capacity << " mAh" << endl;
  cout << "Discharge Rate of Battery: \t" << bat.discharge << " C" << endl;
}
