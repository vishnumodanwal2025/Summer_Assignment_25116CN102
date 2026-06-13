#include<stdio.h>
int main() 
{
int n,maxPrime=-1;
printf("Enter a number: ");
scanf("%d", &n);
int temp=n;
    while(n%2==0)
    {
    maxPrime = 2;
    n =n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
    while(n%i==0) 
    {
    maxPrime = i;
    n = n/i;
    }
    }
    if(n>2) 
    {
    maxPrime = n;
    }
printf("The largest prime factor of %d is: %d\n", temp, maxPrime);
return 0;
}