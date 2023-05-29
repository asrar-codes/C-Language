#include <iostream>
using namespace std;

int main()
{

 /*  // char ch = '1';
  char ch = 'a';
  int num = 1;
  switch (ch)
  {
  case 1:
   cout << "First" << endl;
   break;
  case 'a':
   switch (num)
   {
   case 1:
    cout << "Value of num is" << num << endl;
    break;
    }
   cout << "Second" << endl;
   break;

  default:
   cout << "It is default case";
  } */

 // mini calculator:

 /* int a, b;
 cout << "Enter the value of a" << endl;

 cin >> a;
 cout << "Enter the value of b" << endl;
 cin >> b;
 char op;
 cout << "Enter the operator" << endl;
 cin >> op;

 switch (op)
 {
 case '+':
  cout << "  a + b is " << a + b << endl;
  break;
 case '-':
  cout << "  a - b is " << a - b << endl;
  break;

 case '*':
  cout << "  a * b is " << a * b << endl;
  break;
 case '/':
  cout << "  a / b is " << a / b << endl;
  break;
 case '%':
  cout << "  a % b is " << a % b << endl;
  break;

 default:
  cout << "Enter the correct operator";
  break;
 } */

 int a;
 cout << "enter the value of a ";
 cin >> a;

 int hundred = a / 100;
 a = a - (hundred * 100);
 int fifty = a / 50;
 a = a - (fifty * 50);
 int twenty = a / 20;
 a = a - (twenty * 20);
 int ten = a / 10;
 cout << "The no of hundred notes: " << hundred << endl;
 cout << "The no of fifty notes: " << fifty << endl;
 cout << "The no of twenty  notes: " << twenty << endl;
 cout << "The no of ten  notes: " << ten << endl;
}