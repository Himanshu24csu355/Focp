//Q14. Given an array of n integers. The task is to print the duplicates in the given array. If there are no duplicates then print -1. 
//Examples: 
//Input: {2, 10,10, 100, 2, 10, 11,2,11,2} 
//0utput: 2 10 11 
//Input: {5, 40, 1, 40, 100000, 1, 5, 1} 
//Output: 5 40 1 
#include <stdio.h> 
int main() { 
int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}; 
int size = 10, i, j, flag = 0; 
for (i = 0; i < size; i++) { 
for (j = i + 1; j < size; j++) { 
if (arr[i] == arr[j]) { 
printf("%d ", arr[i]); 
flag = 1; 
break; 
} 
} 
for (j = 0; j < i; j++) { 
if (arr[i] == arr[j]) break; 
} 
} 
if (flag == 0) printf("-1\n");
return 0;
}