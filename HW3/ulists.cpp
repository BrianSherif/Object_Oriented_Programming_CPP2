/*
CH08-320143
problem_3.3
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
  list<int> A;
  list<int> B;
  int x; //input element
  cin >> x;
  int counter = 0;
  if (x != 0 || x < 0 ) {
    counter++;
    B.push_front(x);
    A.push_back(x);
  }
  while(x != 0 || x < 0 ){
    cin >> x;
    if (x != 0 || x < 0 ) {
      counter++;
      B.push_front(x);
      A.push_back(x);
    }
  }
  int z = counter;
  for (list<int>::iterator i = A.begin(); i != A.end(); ++i){
    cout << *i;
    counter--;
    if (counter!=0) {
      cout << ",";
    }
  }
  cout << '\n';

  ofstream output("listB.txt", ios::out|ios::binary);
  if(!output.good())
  {
    cout<<"file error"<<endl;
    exit(1);
  }
  for(list<int>::iterator i = B.begin(); i != B.end(); ++i)
  {
    output << *i << ' '; //print in file
  }
  output.close();//close file
  cout << endl;
  A.splice(A.end(), A, A.begin());
  B.splice(B.end(), B, B.begin());

  //reset counter
  counter=z;

  for (list<int>::iterator i = A.begin(); i != A.end(); ++i){
    cout << *i;
    counter--;
    if (counter != 0) {
      cout << ",";
    }
  }
  cout << '\n';

  //reset counter
  counter=z;

  for (list<int>::iterator i = B.begin(); i != B.end(); ++i){
    cout << *i;
    counter--;
    if (counter != 0) {
      cout << ",";
    }
  }
  cout << '\n';

  cout << endl;

  A.merge(B);
  A.sort();

  //print the merged lists
  cout <<"merged list: ";
  for(list<int>::iterator i = A.begin(); i != A.end(); ++i)
  {
    if(i == --A.end())
    {
      cout << *i;
    }else{
      cout << *i << ' ';
    }
  }
  cout << '\n';
  return 0;
}
