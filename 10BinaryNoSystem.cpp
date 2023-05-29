#include <iostream>
#include <math.h>
using namespace std;

int main()
{

 // decimal to binary program
 /* int n;
 cin >> n;

 int ans = 0;
 int i = 0;
 while (n != 0)
 {
  int bit = n & 1;
  ans = (bit * pow(10, i)) + ans;
  n = n >> 1;
  // n = n / 2;
  i++;
 }
 cout << "Answer is" << ans << endl; */

 /*  int a = 5;

  int bit = a & 1;
  cout << bit; */

 // binary to decimal

 int m;
 cin >> m;
 int answer = 0;
 int j = 0;

 while (m != 0)
 {
  int digit = m % 10;
  if (digit == 1)
  {
   answer += pow(2, j);
  }

  m = m / 10;
  j++;
 }
 cout << answer << endl;
}