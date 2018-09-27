/*
CH08-320143
problem_3.5
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <deque>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period){
  this->period = period;
}

void WindGauge::currentWindSpeed(int speed){
  if((int)d.size() == period){
    d.pop_back();
    d.push_front(speed);
  }
  else{
    d.push_front(speed);
  }
}


int WindGauge::highest() const{
  //iterator
  deque<int>::const_iterator it = d.begin();
  int max = *it;
  while(it != d.end()){
    if(*it > max){
      max = *it;
    }
    it++;
  }
  return max;
}

int WindGauge::lowest() const{
  deque<int>::const_iterator it = d.begin();
  int low = *it;
  while(it != d.end()){
    if(*it < low){
      low = *it;
    }
    it++;
  }
  return low;
}

int WindGauge::average() const{
  deque<int>::const_iterator it = d.begin();
  int sum = 0;
  int average;
  while(it != d.end()){
    sum = sum + *it;
    it++;
  }
  average = sum/d.size();
  return average;
}


void WindGauge::print(){
  cout << "lowest: " << lowest() << endl;
  cout << "average: " << average() << endl;
  cout << "highest: " << highest() << endl;
}
