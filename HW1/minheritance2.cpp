/*
CH08-320143
problem_1.4
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A (int i) { x = i;}
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C() : A(10) { }
};

class D: public B, public C {
public:
  D() : A(10) ,B(), C(){  //explicit construction call

  }
};

int main()
{
    D d;
    d.print();
    return 0;
}

/*
The error was that The parent class A has an explicit constructor. the constructor of class A has a parameter
which does not allow compiler to generate an implicit call to it.
Error : base class constructor must explicitly initialize parent class constructor
Solution:
Explicitly call a constructor from Class D
*/
