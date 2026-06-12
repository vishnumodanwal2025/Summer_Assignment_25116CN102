#include<stdio.h>
int main() 
{
int n,original,remainder,result=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    original=n;
    while(original!=0) 
    {
    remainder=original%10;
        result=result+(remainder*remainder*remainder);
        original=original/10;
    }
    if(result==n)
        printf("%d is an Armstrong number.\n",n);
    else
        printf("%d is not an Armstrong number.\n",n);
return 0;
}