#include<stdio.h>
int main() 
{
int arr[5];
int i;
// Input elements
printf("Enter 5 numbers:\n");
for(i = 0; i < 5; i++) 
{
scanf("%d", &arr[i]);
}
// Display elements
printf("\nThe elements in the array are:\n");
for(i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}
return 0;
}