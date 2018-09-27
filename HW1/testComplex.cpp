/*
CH08-320143
problem_1.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
//Dear TA please note that I ran out of time to modify the main function.
//Thank you, Brian Sherif. 
#include "Complex.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv){
    float re;
    float im;

    cout << "Basic Functionality Test" << endl;
    cout << "Enter a number, with Real and Imaginary part" << endl;
    cout << "Real: ";
    cin >> re;
    cout << "Imaginary: ";
    cin >> im;

    //create a obj
    Complex c1;
    Complex c2(re, im);
    Complex c3(re, im);

    cout<< "Print the defalut value" << endl;
    c1.print();

    cout<< "Print the constructor passed complex number." << endl;
    c2.print();

    cout<< "Test the getter and setter." << endl;
    cout<< "Before" << endl;
    c3.print();
    c3.setRe(-2.0);
    c3.setIm(-4.0);
    cout<< "After" << endl;
    c3.print();

    cout<< "Get Real: " << c3.getRe() << endl;
    cout<< "Get Imaginary: " << c3.getIm() << endl;


    cout << "Complex number operation check" << endl;
    cout << "Real: ";
    cin >> re;
    cout << "Imaginary: ";
    cin >> im;

    Complex test1(re, im);

    cout << "Real: ";
    cin >> re;
    cout << "Imaginary: ";
    cin >> im;

    Complex test2(re, im);

    cout << "test1: ";
    test1.print();

    cout << "test2: ";
    test2.print();

    Complex sum = test1 + test2;
    cout <<"sum of two: ";
    sum.print();
    Complex diff = test1 - test2;
    cout << "difference of two: ";
    diff.print();

    Complex prod = test1 * test2;
    cout <<"product of the two: ";
    prod.print();

}
