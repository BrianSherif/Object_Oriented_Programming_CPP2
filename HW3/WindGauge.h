/*
CH08-320143
problem_3.5
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include <deque>

using namespace std;

class WindGauge {
public:
  WindGauge(int period = 12);
  void currentWindSpeed(int speed);
  int highest() const;
  int lowest() const;
  int average() const;
  void print();

private:
  int period;
  int speed;
  deque <int> d;
};
