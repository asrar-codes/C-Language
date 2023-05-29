#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 /*  // pattern 1
  int row = 1;
  while (row <= n)
  {
   int col = 1;
   char ch = 'A' + row - 1;
   while (col <= n)
   {
    cout << ch;
    col++;
    ch++;
   }
   cout << endl;
   row++;
  } */
 // pattern 2
 /*  int row = 1;
  while (row <= n)
  {

   // print space
   int space = n - row;

   while (space)
   {
    cout << " ";
    space--;
   }
   // print star
   int col = 1;
   while (col <= row)
   {
    cout << "*";
    col++;
   }
   cout << endl;
   row++;
  } */
 // pattern 3
 /* int row = 1;
 while (row <= n)
 {

  int col = n;
  while (row <= col)
  {
   cout << "*";
   col--;
  }
  cout << endl;
  row++;
 } */

 // pattern 4
 int row = 1;
 while (row <= n)
 {
  // print space
  int space = row - 1;
  while (space)
  {
   cout << " ";
   space--;
  }

  int col = n;
  while (row <= col)
  {
   cout << "*";
   col--;
  }
  cout << endl;
  row++;
 }
}