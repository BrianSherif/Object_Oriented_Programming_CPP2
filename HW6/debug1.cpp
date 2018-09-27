/*
CH08-320143
problem_6.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/
#include <iostream>

using namespace std;

int sum (int a[], int nr)
{
  int s = 0;
  for (int i = 0; i < nr; i++)
    s += a[i];
  return s;
}
//used break point to run up to the sum call then found if only 2 numbers are entered a weird number appears
// after reading thru the code and viewing the output of the GDB I noticed that the i overflows beyond the array
unsigned int difference (unsigned int a, unsigned int b)
{
  if ((a - b) > 0)
    return b - a;
  else
    return a - b;
}

//using the step, I found that a problem constantly occurs at the function call of difference.
// this allowed me to pin point the problem.
int
main ()
{
  int n;
  cout << "n=";
  cin >> n;
  int v[n];
  cout << "Enter values for the array" << endl;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int result = sum (v, n);
  cout << "Result=" << result << endl;
  int x, y;
  cout << "x=";
  cin >> x;
  cout << "y=";
  cin >> y;
  cout << "Difference=" << difference (x, y) << endl;
  return 0;
}
