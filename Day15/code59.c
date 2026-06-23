#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    // Store the last element
    int last = arr[size - 1];
    // Shift all elements to the right by 1 (moving backwards)
    for(int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Put the last element at the front
    arr[0] = last;
    // Print the rotated array
    printf("Right Rotated Array: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}