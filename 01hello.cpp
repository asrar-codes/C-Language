#include <iostream>
using namespace std;

int main()
{
  cout << "hello world 👋\n";
  cout << "\\n is used to insert a new line" << endl;
  cout << "endl is also used to insert a new line" << endl;

  /*

  \t	Creates a horizontal tab
  \\	Inserts a backslash character (\)
  \"	Inserts a double quote character
  \'	Inserts a sinlge quote character

  */

  /*   cout << "hel\tlo" << endl;
       cout << "I can\'t do it";
    */

  //  data types
  int a = 1234; // 32-bit || 4 Byte
  // cout << "size of a is : " << sizeof(a) << endl;
  char b = 'v'; // 8-bit || 1 Byte
  // cout << "size of b is: " << sizeof(b) << endl;

  bool bl = false;
  // cout << "size of bl is: " << sizeof(bl);

  int myAge = 19;
  cout << "I am " << myAge << "years." << endl;
  ;

  //  create a constant variable
  const float PI = 3.14;
  cout << PI << endl;
  // type casting..

  int c = 'a';
  // cout << c << endl; //

  char ch = 98;
  // cout << ch << endl;

  //

  char ab = 123456;
  // cout << ab << endl;

  // unsigned int positive = 123;
  unsigned int positive = -123; // prints a big number
  cout << positive << endl;
}