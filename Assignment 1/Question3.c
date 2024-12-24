//Q3. WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator) 
#include <stdio.h> 
int main() { 
int a = 15, b = 7; 
while (b != 0) { 
int borrow = (~a) & b; 
a = a ^ b; 
b = borrow << 1; 
} 
printf("Result: %d\n", a); 
return 0; 
} 
