#include<stdio.h>
#include<stdbool.h>
// Function to check if a 3-digit number is an Armstrong number
bool isArmstrong(int num) 
{
int original=num;
int sum=0;    
    while(num>0) 
    {
    int remainder = num % 10;
    sum = sum + (remainder * remainder * remainder);
    num = num / 10;
    }
return (original == sum);
}
int main() 
{
int number = 153;    
    if (isArmstrong(number))
    {
    printf("%d is an Armstrong number.\n", number);
    }else
    {
    printf("%d is not an Armstrong number.\n", number);
    }
return 0;
}