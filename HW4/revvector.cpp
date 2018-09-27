/*
CH08-320143
problem_4.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
  vector<int> v;
  vector<int>::const_iterator pos;
  int i;

  //pushing values in the vector
  for(i=1; i<=30; i++)
  v.push_back(i);

  //putting 5 at the end
  v.push_back(5);
  reverse(v.begin(), v.end());

  //printing the reversed vector using iterator
  cout << "Reversed vector: " << endl;
  for(pos = v.begin(); pos != v.end(); pos++)
  cout << *pos << ' ' << '\n';

  //replacing 5 with 129
  replace(v.begin(), v.end(), 5, 129);
  vector<int>::const_iterator pos2;

  //printing vector using iterator
  cout << "Printing vector with replacement: " << endl;
  for(pos2 = v.begin(); pos2 != v.end(); pos2++)
  cout << *pos2 << ' ' << '\n';

  return 0;
}
