#include "calculator.h"
#include <bits/stdc++.h> 
using namespace std; 
  
void Calculator::swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void Calculator::bubbleSort(int arr[], int n)  
{  
    int i, j; 
    for (i = 0; i < n-1; i++)      
    {
    	for (j = 0; j < n-i-1; j++)  
	{
        	if (arr[j] > arr[j+1])  
		{
            		swap(&arr[j], &arr[j+1]);
		}  
	}
    }
}  

double Calculator::min(double x, double y)
{
	return x > y ? y : x;
}

void Calculator::printArray(int arr[], int size)  
{  
    int i; 
    for (i=0; i < size; i++)  
    {
        cout << arr[i] << " ";  
    }
    cout << endl;  
} 
