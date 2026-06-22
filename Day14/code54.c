#include<stdio.h>
int main() 
{
    int arr[5];
    int i, key, count = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++) 
    {
        if(arr[i] == key) 
        {
            count++;
        }
    }
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}