#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}

void reverseArray(int arr[], int size)
{

 int start = 0;
 int end = size - 1;
 while (start <= end)
 {
  swap(arr[start], arr[end]);
  start++;
  end--;
 }
}

int main()
{
 int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

 int arr2[5] = {
     2,
     7,
     9,
     10,
     22,
 };
 // reverse array
 reverseArray(arr, 10);
 reverseArray(arr2, 5);

 printArray(arr, 10);
 printArray(arr2, 5);
}