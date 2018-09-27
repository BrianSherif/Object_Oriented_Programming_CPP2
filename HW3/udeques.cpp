/*
CH08-320143
problem_3.4
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
  deque <float> D;
  float x;
  cout << "Input values: ";
  cin >> x;
  if (x != 0) {
    if (x>0) {
      D.push_back(x);
    }
    if (x<0) {
      D.push_front(x);
    }
  }

  while(x!=0){
    //reading the floats
    cin >> x;
    //if negative add to front
    if(x < 0){
      D.push_front(x);
    }
    //if positive then add to the back
    if(x > 0){
      D.push_back(x);
    }
  }

  cout << endl;

  //printing the floats using iterator
  deque<float>::const_iterator i;
  for(i = D.begin(); i != D.end(); i++){
    cout << *i << ' ';
  }

  cout << endl;

  //insert 0 between the last negative and the first positive
  for(deque<float>::iterator it = D.begin(); it != D.end(); it++){
    if(*it > 0){
      D.insert(it,0);
      break;
    }
  }

  cout << endl;

  for(i = D.begin(); i != D.end(); i++){
    if( i == D.end()-1){
      cout << *i;
    }
    else{
      cout<< *i << ';';
    }
  }

  cout<< endl;

  return 0;
}
