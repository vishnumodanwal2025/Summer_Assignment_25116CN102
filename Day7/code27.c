#include <stdio.h>
int sumOfDigits(int n)
{
    if(n == 0) 
    {
    return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);    
    // Using absolute value to handle negative numbers properly
    int absoluteNum = (num < 0) ? -num : num;
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(absoluteNum));
    return 0;
}