#include<stdio.h>
int main() 
{
    int arr[5];
    int i, key, found = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++) 
    {
        if(arr[i] == key) 
        {
            printf("Element found at index %d\n", i);
            found = 1; 
            break;
        }
    }
    if(found == 0) 
    {
        printf("Element not found in the array.\n");
    }
return 0;
}