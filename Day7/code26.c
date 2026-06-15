#include <stdio.h>
int fibonacci(int n)
{
    if(n == 0 || n == 1) 
    {
    return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int terms;
    printf("Enter the position for Fibonacci sequence: ");
    scanf("%d", &terms);
    printf("Fibonacci number at position %d is %d\n", terms, fibonacci(terms));
    return 0;
}