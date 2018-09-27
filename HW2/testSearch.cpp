/*
CH08-320143
problem_2.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>
#include <string.h>

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

int main() {
	int intarr[] = {1, 2, 3, 4, 5, 6};
	cout << array_search(intarr, 8, 6) << endl;

	double darr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	cout << array_search(darr, 5.5, 6) << endl;

	string sarr[] = {"apple", "cherry", "orange"};
  string y = "orange";
	cout << array_search(sarr, y, 3) << endl;

Complex object = Complex(3, 4);
	Complex carr[] = {Complex(1, 2), Complex(3, 4), Complex(-3, -5)};
	cout << array_search(carr, object, 3) << endl;

  return 0;
}
