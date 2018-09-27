/*
CH08-320143
problem_2.2
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <string>
#include <iostream>
using namespace std;

int const DEF = 10;

template <class T>
class Stack{
private:
  int size;
  T top;
  T *stack;
public:
  Stack();
  ~Stack();
  Stack(int);
  Stack(const Stack&);

  bool if_Full();
  bool push(const T&);
  bool if_Empty();
  bool pop(T &out);

  T back(void);
  int getNumEntries();
};


template<class T>
Stack<T>::Stack(){
  stack = new T[DEF];
  top = 0;
  size = DEF;
}


template<class T>
Stack<T>::Stack(int nsize){
  stack = new T[nsize];
  top = 0;
  size = nsize;
}


template<class T>
Stack<T>::Stack(const Stack &s){
  size = s.size;
  top = s.top;
  stack = new T[size];
  for(int i = 0; i < top; i++){
    stack[i] = s.stack[i];
  }
}


template<class T>
Stack<T>::~Stack(){
  delete[] stack;
}


template<class T>
bool Stack<T>::push(const T& in){
  if(top == size){
    cout << "Stack overflow" << endl;
    return false;
  }
  else{
    stack[top] = in;
    top = top + 1;
    return true;
  }
}


template<class T>
bool Stack<T>::pop(T &out){
  if(top == 0){
    cout << "Empty stack (Popping function)" << endl;
    return false;
  }
  else{
    cout << stack [top-1]<< '\n';
    out = stack[top - 1];
    top = top - 1;
    return true;
  }
}


template<class T>
int Stack<T>::getNumEntries() {
  return top;
}
