/*
CH08-320143
problem_4.4
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/


#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Access{
public:
  void activate(int code);
  void deactivate(int code);
  bool isactive(int code);
  set<int> getter();
private:
  set<int> access;
};
