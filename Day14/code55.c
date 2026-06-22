#include<stdio.h>
int main() 
{
    int arr[5];
    int i, max1, max2;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    // Initialize max1 and max2 with very small values
    max1 = arr[0];
    max2 = -1; 
    for(i = 1; i < 5; i++) 
    {
        if(arr[i] > max1) 
        {
            max2 = max1; 
            max1 = arr[i];
        } 
        else if(arr[i] > max2 && arr[i] != max1) 
        {
            max2 = arr[i]; 
        }
    }
    if(max2 == -1) 
    {
        printf("There is no second largest element.\n");
    }else
    {
        printf("The second largest element is %d\n", max2);
    }
return 0;
}