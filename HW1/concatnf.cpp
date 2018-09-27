/*
CH08-320143
problem_1.2
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
  //taking in number of files
  int n;
  cout << "Nr of files:";
  cin >>n;

    ifstream read;
    ofstream output("concatn.txt", ios::out|ios::binary);
  if(!output.good())
    {
        cout << "error" << endl;
    }
    char a[n][50];
    char help[50];

    for(int i=0; i<n; i++)
    {
      //taking in the name and location of file on machine and plugging it into an array
      cout << "name and location of files:";
       scanf("%s", help);
       strcpy(a[i], help);
    }

    string STRING;
    for(int i=0; i<n; i++)
    {
        //taking each file and reading it in binary.
        read.open(a[i], ios::in | ios::binary);
        //reading and outputting each string till EOF
        while(read.eof() == false)
        {
            getline(read, STRING);
            output << STRING;
        }
        //output a newline between each one file input
        output << "\n";
        read.close();
        read.clear();
    }
    //close file
    output.close();

    return 0;
}
