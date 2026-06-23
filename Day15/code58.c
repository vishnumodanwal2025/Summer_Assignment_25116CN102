#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    // Store the first element
    int first = arr[0];
    // Shift all elements to the left by 1
    for(int i = 0; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    // Put the first element at the end
    arr[size - 1] = first;
    // Print the rotated array
    printf("Left Rotated Array: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}