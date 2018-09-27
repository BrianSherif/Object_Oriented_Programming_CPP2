/*
CH08-320143
problem_4.5
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <map>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <assert.h>

using namespace std;

int main(){
    map<string, string> M;
    string name;
    string date;
//not sure why it does not work on my compiler. For some reason there is no proper return
    ifstream File("data.txt");
    assert(File.good());//check if file has been found

    bool z = 1;
    while(z)
    {
        getline(File, name, '\n');
        cout << name.length() << endl;
        getline(File , date, '\n');
        M[name] = date;
        z = File.eof(); //check if end of file is reached
    }
    while(1)
    {
        cout << "Enter name: ";
        getline(cin, name, '\n');
        map <string, string> ::const_iterator search = M.find(name);
        if(search != M.end()) {
        cout << name << "->" << search->second << '\n';
        //example found online of how to print sets
    }
    else if (search == M.end()) {
    std::cout << "Not found\n";
    //else not found
    }
}
    File.close();
    //close file
    return 0;
}
