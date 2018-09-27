/*
CH08-320143
problem_1.3
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B : virtual public A //virtually inheriting from class A
{
public:
  B()  { setX(10); }
};

class C : virtual public A //virtually inheriting from class A
{
public:
  C()  { setX(20); }
};

class D : virtual public B, public C{
};

int main()
{
    D d;
    d.print();
    return 0;
}
/*
I beleive that the following issue was caused by the diamond problem.
it is an ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C.
The way to fix this is virtual inheritance. It's class A that needs to be virtually inherited.
*/
/*
30:7: error: non-static member 'print' found in multiple base-class subobjects of type 'A':
    class D -> class B -> class A
    class D -> class C -> class A
    d.print();
      ^
/Users/Brian/Desktop/1_3.cpp:9:8: note: member found by ambiguous name lookup
  void print() { cout << x; }
       ^
1 error generated.
*/
