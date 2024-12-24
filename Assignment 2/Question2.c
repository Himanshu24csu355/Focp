//Q2. WAP to print grade of students as per their marks given in an array. (>=75—A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade). 
#include <stdio.h> 
int main() { 
int marks[] = {78, 65, 55, 82, 39}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
if (marks[i] >= 75) { 
printf("A "); 
} else if (marks[i] >= 60) { 
printf("B "); 
} else if (marks[i] >= 40) { 
printf("C "); 
} else { 
printf("D "); 
} 
} 
return 0; 
} 