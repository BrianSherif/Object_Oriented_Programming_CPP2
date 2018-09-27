/*
CH08-320143
problem_5.3
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class Motor{
public:
    Motor() {throw string("This motor has problems");};
    ~Motor() {};
};

class Car{
private:
    Motor *M;
public:
  //dynamic allocation of motor
    Car() {M = new Motor();};
    ~Car() {};
};

class Garage {
private:
    Car *C;
public:
    Garage() {
        try{
            C = new Car();
        }
        //catching the exception from Motor
        catch(string ch)
        {
            cout << ch << endl;
            throw string("The car in this garage has problems with the motor\n");
        }
    };
    ~Garage() {};
};

int main(){
    try{
        Garage x;
    }
    //catching the exception from Garage
    catch(string a){
        cout << a;
    }

    return 0;
}
