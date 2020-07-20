#include <iostream> 
using namespace std; 
  
int lsearch(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main() 
{ 
    int arr[] = { 5, 2, 4, 3, 10 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = lsearch(arr, n, x); 
    if (result == -1)
		cout<<"Element is not present in array"; 
    else
		cout<<"Element is present at index " <<result; 
   return 0; 
} 
