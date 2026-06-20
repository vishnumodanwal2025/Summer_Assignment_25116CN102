#include<stdio.h>
#include<stdbool.h>
// Function to check if a number is a perfect number
bool isPerfect(int num)
{
int sum = 0;    
    for(int i = 1; i < num; i++) 
    {
    if(num%i==0) 
    {
    sum = sum + i;
    }
    }
return (sum==num);
}
int main()
{
int number = 28;     
    if(isPerfect(number)) 
    {
    printf("%d is a perfect number.\n", number);
    }else
    {
    printf("%d is not a perfect number.\n", number);
    }
return 0;
}