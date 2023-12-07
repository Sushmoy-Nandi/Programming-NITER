#include <stdio.h>
int main() 
{
    int n;
    // Input: Number of elements in the array
    //printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  // Declare an array of size n
    // Input: Elements of the array
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print elements using a pointer
    int *ptr = arr;  // Pointer points to the first element of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *ptr);  // Print the value pointed by the pointer
        ptr++;               // Move the pointer to the next element
    }

    return 0;
}
