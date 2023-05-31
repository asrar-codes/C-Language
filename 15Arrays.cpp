#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }

 // cout << num2 << endl;
}

int main()
{
 // declare
 int num[15];

 // cout << "value at 0 index " << nu/m[0] << endl;
 // cout << "value at 8th index " << num[8] << endl;
 // cout << "value at 20th index " << num[30] << endl; // according love babbar I should get an error
 // cout << num << endl;

 int num2[4] = {1, 2, 3, 4};
 // cout << "value at 2nd index " << num[1] << endl;

 int num3[15] = {3, 5, 7, 9};
 int n = 15;

 printArray(num3, 15);
}