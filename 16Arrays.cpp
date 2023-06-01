#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

 for (int i = 0; i < size; i++)
 {

  cout << arr[i] << " ";
 }
}

// get max value in array

int getMax(int num[], int n)
{
 int maximum = INT_MIN;

 for (int i = 0; i < n; i++)
 {
  // pre defined function to get min
  maximum = max(maximum, num[i]);

  // custom code to get max
  /*    if (num[i] >= maximum)
 {
  maximum = num[i];
 } */
 }
 return maximum;
}

// get min value in the array

int getMin(int num[], int n)
{
 int minimum = INT_MAX;
 for (int i = 0; i < n; i++)
 {
  // in built function to get min
  minimum = min(minimum, num[i]);

  /* if (num[i] <= minimum)
  {
   minimum = num[i];
  } */
 }
 return minimum;
}
int main()
{

 int size;
 cin >> size;

 // int num[size];// bad practice to use the size of array as variable...
 // it is better to initialize an array with size 10000 than to have an array with size as variable, we will know when to use the variable size of array in upcoming lectures...(Pointers);

 int num[100];
 for (int i = 0; i < size; i++)
 {
  // cout << num[i]
  cin >> num[i];
 }
 printArray(num, size);
 cout << endl;

 cout << "max value is:  " << getMax(num, size);
 cout << endl;

 cout << "min value is:  " << getMin(num, size);
 // homework
 //  create  function that gives the sum of elements of array
}