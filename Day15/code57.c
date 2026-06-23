#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int temp;
    // Two-pointer approach to swap elements
    int start = 0;
    int end = size - 1;
    while (start < end) 
    {
        // Swap the elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move the pointers closer
        start++;
        end--;
    }
    // Print the reversed array
    printf("Reversed Array: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}