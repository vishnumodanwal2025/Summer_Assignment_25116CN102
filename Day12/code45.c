#include<stdio.h>
#include<stdbool.h>
// Function to check if a number is a palindrome
bool isPalindrome(int num)
{
int original=num;
int reversed=0;    
    while(num>0)
    {
    int remainder = num % 10;
    reversed = (reversed * 10) + remainder;
    num = num / 10;
    }
return (original==reversed);
}
int main() 
{
int number = 121;    
    if(isPalindrome(number))
    {
    printf("%d is a palindrome number.\n", number);
    }else
    {
    printf("%d is not a palindrome number.\n", number);
    }
return 0;
}