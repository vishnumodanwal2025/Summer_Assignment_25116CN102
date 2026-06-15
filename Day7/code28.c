#include <stdio.h>
int reverseNumber(int n, int sum)
{
    if(n == 0)
    {
    return sum;
    }
    sum = (sum * 10) + (n % 10);
    return reverseNumber(n / 10, sum);
}
int main() 
{
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);    
    int reversed = reverseNumber(num, 0);
    printf("Reverse of %d is %d\n", num, reversed);
    return 0;
}