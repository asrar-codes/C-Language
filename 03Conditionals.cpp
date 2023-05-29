#include <iostream>
using namespace std;
int main()
{
 /*
  int age;
  cin >> age;
  int limit = 30;
  if (age >= limit)
  {
   cout << "your age is " << age << endl;
  }
  else if (age < 30 && age > 20)
  {
   cout << "still not there" << endl;
  }
  else
  {
   cout << "you're too young" << endl;
  } */

 // program to check if a given character is a alphabet in capitalCase, lowerCase or isn't a alaphabet letter

 char s;
 cout << "enter the character" << endl;
 cin >> s;
 if (s >= 'A' && s <= 'Z')
 {
  cout << "character is in uppercase" << endl;
 }
 else if (s >= 'a' && s <= 'z')
 {
  cout << "character is in lowerCase" << endl;
 }
 else
 {
  cout << "it is not a alphabet" << endl;
 }
}