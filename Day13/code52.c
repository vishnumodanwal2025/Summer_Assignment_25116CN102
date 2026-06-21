#include<stdio.h>
int main() 
{
    int arr[5];
    int i, even=0, odd=0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++) 
    {
        if(arr[i] % 2 == 0)
        {
            even++; 
        } else {
            odd++; 
        }
    }
    printf("\nTotal Even elements = %d", even);
    printf("\nTotal Odd elements = %d", odd);
    return 0;
}