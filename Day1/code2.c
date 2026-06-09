#include<stdio.h>
int main()
{
int n,i;
printf("enter the number:\n");
scanf("%d",&n);
printf("multiplication table for %d number:\n");
for(i=1;i<=10;i++)
{
    printf("%d x %d = %d\n",n,i,n*i);
}
return 0;
}