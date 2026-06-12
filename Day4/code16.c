#include<stdio.h>
int main() 
{
int start,end,i,temp,remainder,sum;
    printf("Enter lower limit and upper limit: ");
    scanf("%d %d",&start,&end);
    printf("Armstrong numbers between %d and %d are: ",start,end);
    for(i=start;i<=end;i++) 
    {
    temp=i;
    sum=0;
    while(temp!=0) 
    {
    remainder=temp%10;
    sum=sum+(remainder*remainder*remainder);
    temp=temp/10;
    }
    if(sum==i)
    {
    printf("%d ",i);
    }
    }
return 0;
}