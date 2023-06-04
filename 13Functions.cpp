#include <iostream>
using namespace std;

int power()
{
 int a, b;
 cin >> a >> b;

 int ans = 1;

 for (int i = 1; i <= b; i++)
 {
  ans = ans * a;
 }
 return ans;
}

int factorial(int n)
{
 int fact = 1;
 for (int i = 0; i <= n; i++)
 {
  fact = fact * i;
 }
 return fact;
}

int ncr()
{
 int n, r;
 cin >> n >> r;

 int answer;

 int nFactorial = 1;
 int rFactorial = 1;
 int n_Minus_r_Factorial = 1;
 for (int i = 1; i <= n; i++)
 {
  if (i <= n)
  {
   nFactorial = nFactorial * i;
  }
  if (i <= r)
  {
   rFactorial = rFactorial * i;
  }
  if (i <= (n - r))
  {
   n_Minus_r_Factorial = n_Minus_r_Factorial * i;
  }

  answer = nFactorial / (rFactorial * n_Minus_r_Factorial);
 }
 // cout << "n! " << nFactorial << endl;
 // cout << "r! " << rFactorial << endl;
 // cout << "n-r " << n_Minus_r_Factorial << endl;
 return answer;
}

bool isEvenOrOdd()
{
 int a;
 cin >> a;

 if (a & 1)
 {
  cout << a << " is odd" << endl;
  return true;
 }

 cout << a << " is even" << endl;
 return false;
}

void printCounting(int n)
{
 for (int i = 1; i <= n; i++)
 {
  cout << i << " ";
 }
}

bool isPrime(int n)
{
 for (int i = 2; i < n; i++)
 {
  if (n % 2 == 0)
  {
   return 0;
   break;
  }
 }
 return true;
}

int main()
{

 // int answer = power();
 // cout << "answer is " << answer << endl;
 // isEvenOrOdd();
 // isEvenOrOdd();
 // int value = ncr();
 // cout << value << endl;
 // printCounting(5);
 // printCounting(15);

 // to check if the given no is prime or not
 int n;
 cin >> n;
 if (isPrime(n))
 {
  cout << n << " is a prime no" << endl;
  return 0;
 }
 cout << n << " is not a  prime no" << endl;
}