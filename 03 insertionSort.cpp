#include <iostream>
using namespace std; 

void insertionSort(int arr[], int n) { 
	int key; 
  	for (int i = 1; i < n; i++) { 
       key = arr[i]; 
       int j = i-1; 
       while (j >= 0 && arr[j] > key) { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
} 

void display(int arr[], int n) { 
   
   for (int i=0; i < n; i++) 
       cout<<arr[i]<<" "; 
} 
  
int main() { 
    int arr[] = {5, 7, 2, 3, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    insertionSort(arr, n); 
    display(arr, n); 
    return 0; 
} 
