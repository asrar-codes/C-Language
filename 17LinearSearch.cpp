#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element)
{

 for (int i = 0; i < size; i++)
 {
  if (arr[i] == element)
  {
   return 1;
  }
 }
 return 0;
}

int main()
{
 int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

 cout << "Enter the element you want search for " << endl;
 int elem;
 cin >> elem;

 bool isFound = linearSearch(arr, 10, elem);
 if (isFound)
 {
  cout << elem << " is present";
 }
 else
 {
  cout << elem << " is not present";
 }

 // check whether 1 is present in it or not
}