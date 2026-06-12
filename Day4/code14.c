#include<stdio.h>
int main()
{
int n,a=0,b=1,c;
    printf("Enter the position (n): ");
    scanf("%d",&n);
    if (n == 1) 
    {
        printf("The 1st Fibonacci term is: %d\n", a);
    }
    else if(n == 2) 
    {
        printf("The 2nd Fibonacci term is: %d\n", b);
    } else 
    {
    for(int i=3;i<=n;i++) 
    {
            c = a + b;
            a = b;
            b = c;
    }
        printf("The %d-th Fibonacci term is: %d\n", n, b);
    }
return 0;
}