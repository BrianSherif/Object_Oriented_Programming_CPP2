/*
CH08-320143
problem_3.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
int check (string x);
  int main(int argc, char const *argv[]) {
    string x;
    cout << "Give input:" << '\n';
    cin >> x;
    vector<string> v;
    bool z = check(x);
    int c = 1;
    int i = 1;
    while (z) {
      v.push_back(x);
      std::cin >> x;
      z = check(x);
      c++;
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
    return 0;
  }
  //check if END was entered to terminate WHile loop
  int check (string x){
    if (x != "END") {
      return 1;
    }
    return 0;
  }
