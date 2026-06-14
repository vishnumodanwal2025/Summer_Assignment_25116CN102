#include<stdio.h>
int main()
{
    double base, result = 1.0;
    int exponent;
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);
if (exponent >= 0) 
{
for (int i = 1; i <= exponent; i++) 
{
result = result * base;
}
} 
else
{
for(int i = 1; i <= -exponent; i++) {
result = result * base;
}
result = 1.0 / result;
}
printf("Result: %.2lf\n", result);
return 0;
}