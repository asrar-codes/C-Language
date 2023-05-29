#include <iostream>
using namespace std;

int main()
{
 // program to print sum of n nos;
 int n;
 cin >> n;
 // int sum = 0;
 // int i = 0;
 /*  while (i <= n)
  {
   sum += i;
   i++;
  }
  cout << sum; */

 // program to find sum of only even nos upto n

 /*  while (i <= n)
  {
   sum += i;
   i += 2;
  }
  cout << sum;
 } */

 // program to check if a given no is prime
 /* int i = 2;
 while (i < n)
 {
  if (n % i == 0)
  {
   cout << n << " is not prime" << endl;
   break;
  }
  else
  {
   cout << n << " is prime" << endl;
  }
  i += 1;
 } */

 // pattern question

 /*
  ****
  ****
  ****
  */

 // int row = 1;
 // while (row <= n)
 // {
 //  int j = 1;
 //  while (j <= n)
 //  {
 //   cout << "*";
 //   j += 1;
 //  }
 //  cout << endl;
 //  row += 1;
 // }

 /* int i = 1;
 while (i <= n)
 {
  int j = 1;
  while (j <= n)
  {
   cout << "*";
   j += 1;
  }
  cout << endl;
  i += 1;
 } */

 /* int i = 1;
 while (i <= n)
 {
  int j = 1;
  while (j <= n)
  {
   cout << j << " ";
   j++;
  }
  cout << endl;
  i++;
 } */

 /*  int i = 1;
  while (i <= n)
  {
   int j = 1;
   while (j <= n)
   {
    cout << n - j + 1 << " ";
    j++;
   }
   cout << endl;
   i++;
  } */

 /*  int i = 1;
  int count = 1;
  while (i <= n)
  {
   int j = 1;
   while (j <= n)
   {

    cout << count;
    count += 1;
    j += 1;
   }
   cout << endl;
   i += 1;
  } */

 /*  int i = 1;
  while (i <= n)
  {
   int j = 1;
   while (j <= i)
   {
    cout << i;
    j += 1;
   }
   cout << endl;
   i += 1;
  } */
 // solve the below question without using value variable....
 int i = 1;
 while (i <= n)
 {
  int j = 1;
  int value = i;
  while (j <= i)
  {
   cout << value;
   value += 1;
   j += 1;
  }
  cout << endl;
  i += 1;
 }
}
