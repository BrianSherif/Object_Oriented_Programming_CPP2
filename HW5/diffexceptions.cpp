/*
CH08-320143
problem_5.2
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <algorithm>

using namespace std;
void func(int a);
class OwnException{
private:
  string str;
public:
  const char *what() throw()
  {
    return "OwnException\n";
  };

  OwnException() {}; //empty constructor empty
  OwnException(string a) {str = a;}//parametric constructor
  virtual ~OwnException() {}; //destructor
};


int main(){
  try{
    func(1);
  }
  catch(char a){
    cerr << "Caught in main: " << a << endl;
  }

  try{
    func(2);
  }
  catch(int i){
    cerr << "Caught in main: " << i << endl;
  }

  try{
    func(3);
  }
  catch(bool b){
    cerr << "Caught in main: " << b << endl;
  }

  try{
    func(6);
  }
  catch(OwnException own){
    cout << own.what();
  }

  return 0;
}



void func(int x){
  switch(x){
    case 1:
    throw 'a';
    break;
    case 2:
    throw 12;
    break;
    case 3:
    throw true;
    break;
    default:
    throw OwnException("Default case exception");
    break;
  }
}
