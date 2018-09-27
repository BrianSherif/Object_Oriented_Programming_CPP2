/*
CH08-320143
problem_2.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <string.h>
#include "Complex.h"
using namespace std;
template<class T>
int array_search(T arr[], T x, int size){
  for (int i = 0; i < size; i++){
    if (arr[i]==x) {
      return i;
    }
  }
  cout<< "Value not found" << '\n';
  return -1;
}
