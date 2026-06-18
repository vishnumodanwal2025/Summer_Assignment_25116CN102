#include<stdio.h>
// Function to find the sum of two numbers
int findSum(int a,int b) 
{
return a + b;
}
int main() 
{
int num1 = 10, num2 = 20;
int sum = findSum(num1,num2);    
printf("The sum of %d and %d is: %d\n", num1, num2, sum);
return 0;
}