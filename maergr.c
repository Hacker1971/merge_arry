#include <stdio.h>
// Includes stdio.h header file for standard I/O functions

void Print_Arry(int arr[], int n) {
// Print_Arry function to print elements of an array 

  for(int i = 0; i < n; i++) {
// Loop from 0 to n-1 to print all elements
    
    printf("%d ", arr[i]); 
// Print each array element arr[i]
    
    printf("\n");
// Print new line
  }
}

void marge(int arr1[], int n, int arr2[], int m, int arr3[]) { 
// marge function to merge two sorted arrays into third array

  int i = 0, j = 0, k = 0;  
// Initialize index variables i, j and k
  
  while((i < n) && (j < m)) {
// Run loop till i reaches n OR j reaches m

    if(arr1[i] < arr2[j]) {
// Compare elements of arrays  
      
      arr3[k++] = arr1[i++];  
// Store smaller element in arr3 and increment indices

    } else {

      arr3[k++] = arr2[j++]; 
    }
  }
  
  while(i < n) { 
// Copy remaining elements of first array
    
    arr3[k++] = arr1[i++];  
  }

  while(j < m) {
// Copy remaining elements of second array

    arr3[k++] = arr2[j++];
  }
}

int main() {

  int arr1[] = {1,3,5,7,9}; 
  int n = sizeof(arr1)/sizeof(arr1[0]); 

// Array arr1 and size n

  int arr2[] = {2,4,6,8};
  int m = sizeof(arr2)/sizeof(arr2[0]);  

// Array arr2 and size m

  int arr3[n+m]; 

// Declare merged array arr3
  
  marge(arr1, n, arr2, m, arr3);  
// Merge arr1 and arr2 into arr3

  Print_Arry(arr3, n+m);  

// Print merged array
  
  return 0;
}