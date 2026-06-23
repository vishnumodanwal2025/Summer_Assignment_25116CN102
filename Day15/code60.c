#include<stdio.h>
int main() 
{
    int arr[] = {1, 0, 2, 0, 3, 4, 0};
    int size = 7;
    int temp[7]; 
    int index = 0;
    // Copy all non-zero elements to the temp array
    for(int i = 0; i < size; i++) 
    {
        if(arr[i] != 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    // Fill the remaining positions of temp array with zeroes
    while(index < size) 
    {
        temp[index] = 0;
        index++;
    }
    // Copy the results back to the original array
    for(int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
    // Print the final array
    printf("Array after moving zeroes: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}