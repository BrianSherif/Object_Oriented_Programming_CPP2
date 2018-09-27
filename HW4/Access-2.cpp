/*
CH08-320143
problem_4.4
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include "Access.h"


using namespace std;

void Access::activate(int code){
  access.insert(code);
}


void Access::deactivate(int code){
access.erase(code);
}


bool Access::isactive(int code){
  set<int>::iterator it;
  bool stat;
  it = access.find(code);
  if( it == access.end()){
    stat=false;
  }
  else{
      stat = true;
  }

  return stat;
}


set<int> Access::getter(){
  return access;
}
