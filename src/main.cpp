#include <calculator.h>
#include <iostream>
using namespace std;

int main()
{
  Calculator calculator;
  double x = 2;
  double y = 6;
  double result = 0.0;
  cout << " x = " << x << ", y = " << y << endl;
  cout << "Min element = " << calculator.min(x, y) << endl;

  int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
  int n = sizeof(arr)/sizeof(arr[0]);  
  calculator.bubbleSort(arr, n);  
  cout<<"Sorted array: \n";  
  calculator.printArray(arr, n);  
  return 0;
}
