#include <iostream>
#include "batteryInfoClass.h"
using namespace std;

batteryInfo::batteryInfo(): data1(0), batInfo("some info") { }

void batteryInfo::print_data1(){
  data1 = 1;
  cout << "data1 is: " << data1 << endl;
}
void batteryInfo::print_data1_constructorVal(){
  cout << "data1 is: " << data1 << endl;
}
string batteryInfo::getInfo(string i){
  batInfo = "Here is " + batInfo + i;
  cout << "Grabbing Info" << endl;
  return batInfo;
}
