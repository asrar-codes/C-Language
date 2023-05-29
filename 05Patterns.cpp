#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int row = 1;

 // pattern 1
 /* while (row <= n)
 {
  int col = 1;
  int value = row;
  while (col <= row)
  {
   // cout << value;
   cout << row - col + 1; // withour using the variable: value
   value--;
   col++;
  }
  cout << endl;
  row++;
 } */

 // pattern 2
 /*  while (row <= n)
  {
   int col = 1;
   while (col <= n)
   {
    char ch = 'A' + row - 1;
    cout << ch;
    col++;
   }
   cout << endl;
   row++;
  } */

 // pattern 3
 /*  while (row <= n)
  {
   int col = 1;
   while (col <= n)
   {
    char ch = 'A' + col - 1;
    cout << ch;
    col++;
   }
   cout << endl;
   row++;
  } */

 // pattern 4
 /*  char value = 'A';
  while (row <= n)
  {
   int col = 1;
   while (col <= n)
   {
    cout << value;
    value = value + 1;
    col++;
   }
   cout << endl;
   row++;
  } */

 // pattern 5
 /*  while (row <= n)
  {
   int col = 1;
   // char output = 'A' + row - 1;
   char output = 'A' + row + col - 2;
   while (col <= n)
   {
    cout << output;
    // output++;
    col++;
   }
   cout << endl;
   row++;
  } */

 // pattern 6
 /*  char output = 'A';
  while (row <= n)
  {
   int col = 1;
   while (col <= row)
   {
    cout << output;
    col++;
   }
   cout << endl;
   output++;
   row++;
  } */

 // pattern 7
 /*  char output = 'A';
  while (row <= n)
  {
   int col = 1;
   while (col <= row)
   {
    cout << output;
    col++;
    output++;
   }
   cout << endl;
   row++;
  } */
 // pattern 8

 /*  while (row <= n)
  {
   int col = 1;
   while (col <= row)
   {
    char output = 'A' + row + col - 2;
    cout << output;
    col++;
   }
   cout << endl;
   row++;
  } */
 // pattern 9

 while (row <= n)
 {
  int col = 1;
  char output = 'A' + n - row;
  while (col <= row)
  {
   cout << output;
   output++;
   col++;
  }
  cout << endl;
  row++;
 }
}