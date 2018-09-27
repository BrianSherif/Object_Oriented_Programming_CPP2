/*
CH08-320143
problem_2.3
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main(){
  //initiliaze an int stack
  Stack<int> st;
  int b = st.getNumEntries();
  cout << b << endl;
  //push 10 elements to the stack
  for(int i=1; i<=10; i++){
    st.push(i);
  }
  //print how many entries are in the stack. (10)
  b = st.getNumEntries();
  cout << b << endl;
  //printing the previously entered data and popping them.
  for(int i=0; i<10; i++)
  {
    int x = 0;
    st.pop(x);
    x++;
  }
  //print how many entries in stack (0)
  int z = st.getNumEntries();
  cout << z << endl;
  //make the stack overflow to show it doesnt crash. stack overflow by 2 figures since max is 10.
  for(int i=1; i<13; i++)
  {
    st.push(i);
  }
  //pop all elements from the stack
  for(int i=0; i<10; i++)
  {
    int x = 0;
    st.pop(x);
    x++;
  }
  //stack is now empty hence size is 0
  int y = st.getSize();
  cout <<"the size is: " <<y << '\n';
  //resize to fit the 13
  st.resize(13);
  //size is now 13
  y = st.getSize();
  cout <<"the size is now : " <<y << '\n';
  //push 13 elements
  for(int i=1; i<13; i++)
  {
    st.push(i);
  }
  //pop and print all 13 elements
  for(int i=0; i<13; i++)
  {
    int x = 0;
    st.pop(x);
    x++;
  }
  return 0;
}
