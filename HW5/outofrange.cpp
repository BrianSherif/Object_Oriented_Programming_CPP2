/*
CH08-320143
problem_5.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

int main(){
  vector<int> v; //create vector
  cout << "Pushing values into vector" << endl;
  for(int i = 1; i <= 20; i++)
  //Pushing the number 8, 20 times
  v.push_back(8);
  //try block
  try{
    cout << "Accessing 21st element";
    v.at(21); //try to access 21st element
    throw "Error No 21st Element";
  }
  //catch block
  catch(out_of_range out){
    //using out
    cerr <<"\n"<< out.what() << endl;
    return 1;
  }
  return 0;
}
