#include<stdio.h>
int main() 
{
    int arr[5];
    int i, j;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements are: \n");
    for(i = 0; i < 5; i++) 
    {
        for(j = i + 1; j < 5; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                printf("%d\n", arr[i]);
                break; 
            }
        }
    }
return 0;
}