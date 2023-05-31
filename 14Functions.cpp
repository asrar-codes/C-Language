#include <iostream>
using namespace std;

// An = a + (n - 1) d ~ nth term of A.P

int noOfSetBits(int a, int b)
{

  int n = 0;
  while (a != 0)
  {
    if (a & 1)
    {
      n += 1;
    }

    a = a >> 1;
  }
  while (b != 0)
  {
    if (b & 1)
    {
      n += 1;
    }
    b = b >> 1;
  }

  cout << n;
  return n;
}

int fibonacci()
{
  // this doesn't work as expected, I'll come back to it
  int n;
  cin >> n;
  int fib = 0;
  for (int i = 3; i <= n; i++)
  {
    fib = i - 1 + (i - 2);
    cout << fib << " ";
  }
  return fib;
}

int main()
{

  /*

  // prints the nth term of AP;
    int n;
   cin >> n;

   cout << (3 * n) + 7;
    */

  // prin the total number of set bits;
  /*
    a:2 ==> 10
    b:3:==> 11

    no of set bits is 3
    */

  /*  int a, b;
   cin >> a >> b;

   noOfSetBits(a, b); */

  fibonacci();
}
