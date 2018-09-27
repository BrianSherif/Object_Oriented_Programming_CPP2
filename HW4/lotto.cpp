/*
CH08-320143
problem_4.2
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <set>
#include <ctime>

using namespace std;

int main(){
  //using set as it has no duplicates
  //random number generator with the local time
  srand(time(NULL));
  //set container
  set<int> s;
  set<int>::const_iterator pos;

  //Pushing random int r in the set
  //6 out of 49 numbers which are randomly chosen
  while(s.size()<6)
  {
    int random_n = rand() % 49 + 1;
    s.insert(random_n);
  }


  cout << "Printing the set: ";
  for(pos = s.begin(); pos != s.end(); pos++)
  {
    cout << *pos << ' ';
  }

  return 0;
}
