//Q13. Given an array, the task is to cyclically rotate the array clockwise by one time. 
//Examples: 
//Input: arr[] = {1, 2, 3, 4, 5} 
//Output: arr[] = {5, 1, 2, 3, 4} 
//Input: arr[] = {2, 3, 4, 5, 1} 
//Output: {1, 2, 3, 4, 5} 
#include <stdio.h> 
int main() { 
int arr[] = {1, 2, 3, 4, 5}; 
int size = 5, last, i; 
last = arr[size - 1]; 
for (i = size - 1; i > 0; i--) { 
arr[i] = arr[i - 1]; 
} 
arr[0] = last; 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
return 0; 
} 