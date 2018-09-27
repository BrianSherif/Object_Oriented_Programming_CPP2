/*
CH08-320143
problem_4.4
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include "Access.h"

using namespace std;

int main(){

  Access obj;
  obj.activate(1234);
  obj.activate(9999);
  obj.activate(9876);

  int password;

  cout<<"password: ";
  cin>>password;

  if (obj.isactive(password) == true) {
  cout << "Password Accepted" << endl;
  }

  else{
  while(obj.isactive(password) == false){
    cout<<"password: ";
    cin>>password;

    if(obj.isactive(password) == true){
      cout << "Password Accepted" << endl;
    }

    if(obj.isactive(password) == false){
      cout << "Password Rejected" << endl;
    }
  }
}

  obj.deactivate(password);
  obj.deactivate(9999);
  obj.activate(1111);

  cout<< "Passwords Deactivated"<<endl;

  do{
    cout<<"password: ";
    cin>>password;

    if(obj.isactive(password) == 1){
      cout << "Password Accepted" << endl;
    }

    if(obj.isactive(password) == 0){
      cout << "Password Rejected" << endl;
    }
  }while(obj.isactive(password) == false);

  return 0;
}
