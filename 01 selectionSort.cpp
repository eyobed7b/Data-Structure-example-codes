#include <iostream>
using namespace std; 

void selectionSort(int arr[], int n) { 
   for (int i = 0; i < n; i++) { 
       	int min = i; 
     	for(int j = i+1; j < n; j++){
      		if(arr[j] < arr[min]) 
           		min=j; 
        }
       swap(arr[min],arr[i]);
  	}
} 

void display(int arr[], int n) { 
   int i; 
   for (i=0; i < n; i++) 
       cout<<arr[i]<<" "; 
} 
  
int main() { 
    int arr[] = {5, 7, 2, 3, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    display(arr, n); 
    return 0; 
} 
