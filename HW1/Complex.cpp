/*
CH08-320143
problem_1.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>

Complex::Complex(){
    re = 0.0;
    im = 0.0;
}

Complex::Complex(float n_re, float n_im): re(n_re), im(n_im) {}

//copy constructor
Complex::Complex(const Complex& other){
    re = other.re;
    im = other.im;
}

//set the proper imagnary and real part

Complex::~Complex(){} //empty destructor

float Complex::getRe(){
    return re;
}

float Complex::getIm(){
    return im;
}

void Complex::setRe(float n_re){
    re = n_re;
}

void Complex::setIm(float n_im){
    im = n_im;
}

//getter and setter method
/*
void Complex::print(){
    std::cout << re;
    if(im < 0.0)
        std::cout << " - " << -1.0 * im << "i" << std::endl;
    else if(im > 0.0)
        std::cout << " + " << im << "i" <<std::endl;
    else
        std::cout << std::endl;//if there is no imagnary part
}
*/
    //get the proper sign
//overloading all tge arthmetic operators
Complex Complex:: operator + (const Complex& c, Complex x){
    return Complex(c.re + x.re, c.im + x.im);
}

Complex Complex:: operator - (Complex c1, Complex c2){
    return Complex(c1.re - c2.re, c1.im - c2.im);
}

Complex Complex:: operator * (Complex c1, Complex c2){
    float new_re = c1.re * c2.re - c1.im * c2.im;
    float new_im = c1.re * c2.im + c1.im * c2.re;
    return Complex(new_re, new_im);
}

Complex& Complex::operator = (const Complex& other){
    re = other.re;
    im = other.im;
    return *this;
}
//overloading input stream
ifstream& operator >> (ifstream& in, const Complex& c){
  std::ifstream Num("in1.txt", std::ios::in);
  if (Num.is_open()) {
    std::string line;
    while (std::getline(Num, line)) {
      std::cout << line << '\n';
    }
    Num.close();
  }
  return line;
}

//overloading output stream
ostream& operator<<(ostream& os, const Complex& c)
{
  ofstream output;
    outfile.open("output", ios::out);
  if(im < 0.0)
    outfile << os << c.re <<" - " << -1.0 * c.im << "i";
  else
    outfile << os << c.re <<" + " << c.im << "i";
    outfile.close();
    return os;
}
