/*
CH08-320143
problem_4.3
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main(){
  set<int> A;
  multiset<int> B;
  int x;
  cout << "Positive Int: ";
  cin >> x;

  while(x>=0){
    A.insert(x);
    B.insert(x);
    cout << "Positive int: ";
    cin >> x;
  }

//initialized iterators
  set<int>::iterator itA;
  multiset<int>::iterator itB;

  //printing both sets
  cout << endl;
  cout << "A: ";
  for(itA = A.begin(); itA != A.end(); itA++)
  {
    cout << *itA << ' ';
  }

  cout << "\nB: ";
  for(itB = B.begin(); itB != B.end(); itB++)
  {
    cout << *itB << ' ';
  }

  cout << endl;
//erasing the accurance of '5'
  A.erase(5);
  B.erase(5);

  cout << "modified A: ";
  for(itA = A.begin(); itA != A.end(); itA++)
  {
    cout << *itA << ' ';
  }
  cout << endl;
  cout << "modified B: ";
  for(itB = B.begin(); itB != B.end(); itB++)
  {
    cout << *itB << ' ';
  }
  cout << endl;

//inserting the numbers 14 and 198
  A.insert(14);
  A.insert(198);

  multiset<int> union_set(B);
  union_set.insert(A.begin(), A.end());

  cout << "Union: ";
  for (int n : union_set)
  {
    cout << n <<  ' ';
  }
  cout << endl;

  set<int> D;
  set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));

  cout << "Intersection: ";
  for (int n : D)
  {
    cout << n <<  ' ';
  }

  set<int> E;
  set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));
  cout << endl;
  cout << "Difference: ";
  for (int n : E)
  {
    cout << n <<  ' ';
  }

  cout << endl;
  set<int> F;
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));
  cout << "Symmetric Difference: ";
  for (int n : F)
  {
    cout << n <<  ' ';
  };
  cout << endl;
  return 0;
}
