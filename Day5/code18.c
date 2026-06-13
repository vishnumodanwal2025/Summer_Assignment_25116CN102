#include<stdio.h>
int main()
{
int n,original,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original=n;
    while(n>0) 
    {
    rem=n%10;
        int fact=1;
        for (int i=1;i<=rem;i++) 
        {
        fact =fact*i;
        }
        sum = sum+fact;
        n = n/10;
    }
    if(sum== original) {
    printf("%d is a Strong Number.\n", original);
    }
    else 
    {
    printf("%d is NOT a Strong Number.\n", original);
    }
return 0;
}