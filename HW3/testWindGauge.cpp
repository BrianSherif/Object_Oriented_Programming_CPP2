/*
CH08-320143
problem_3.5
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main()
{
  //Creating a WindGauge object.
  WindGauge w;
  //five wind speeds
  w.currentWindSpeed(15);
  w.currentWindSpeed(16);
  w.currentWindSpeed(12);
  w.currentWindSpeed(15);
  w.currentWindSpeed(15);
  w.print();
  cout<<endl;
  //additional ten measurments
  w.currentWindSpeed(16);
  w.currentWindSpeed(17);
  w.currentWindSpeed(16);
  w.currentWindSpeed(16);
  w.currentWindSpeed(20);
  w.currentWindSpeed(17);
  w.currentWindSpeed(16);
  w.currentWindSpeed(15);
  w.currentWindSpeed(16);
  w.currentWindSpeed(20);
  w.print();

  return 0;
}
