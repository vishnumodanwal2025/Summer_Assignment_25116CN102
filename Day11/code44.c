#include<stdio.h>
// Function to find the factorial of a number
long long findFactorial(int n)
{
long long factorial = 1;    
    for(int i = 1; i <= n; i++) {
    factorial = factorial * i;
    }
return factorial;
}
int main() 
{
int num = 5;
long long result = findFactorial(num);    
printf("The factorial of %d is: %lld\n", num, result);
return 0;
}