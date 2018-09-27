/*
CH08-320143
problem_3.2
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int check (string x);
int main() {
  //init
  string x;
  int c = 1;
  int i = 1;
  cout << "Give input:" << '\n';
  getline (std::cin,x);;
  vector<string> v;
  bool z = check(x);
  //push elements into the vector
  while (z) {
    v.push_back(x);
    getline (std::cin,x);;
    z = check(x);
    c++;
  }
  //replace final elements by question marks
  v.back()="???";
  //swap elements
  if (c >= 5) {
    string temp = v.at(1);
    v.at(1)=v.at(4);
    v.at(4)=temp;
  }
  //could not undersatnd how to use [ ] to print elements
  for (vector<string>::iterator it = v.begin() ; it != v.end(); ++it){
    i++;
    cout << *it << ' ';
    if (i != c) {
      cout << ",";
    }
  }
  cout << '\n';
  //use iterator to print
  for (vector<string>::iterator it = v.begin() ; it != v.end(); ++it){
    i++;
    cout << *it << ' ';
    if (i != c) {
      cout << ";";
    }
  }
  cout << '\n';
  //use iterator to print in reverse
  for (vector<string>::iterator it = v.end()-1 ; it != v.begin()-1 ; it--){
    i++;
    cout << *it;
    if (i != c) {
      cout << " ,";
    }
  }
  cout << '\n';
  return 0;
}
  //check if END was entered to terminate WHile loop
int check (string x){
  if (x != "END") {
    return 1;
  }
  return 0;
}
