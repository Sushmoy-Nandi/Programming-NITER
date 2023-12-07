#include <stdio.h>
#include <stdlib.h>
int main() {
int n; // Number of elements in the array
scanf("%d", &n);
// Dynamically allocate memory for an integer array of size 'n'
int *dynamicArray = (int *)malloc(n * sizeof(int));
if (dynamicArray == NULL) 
{
printf("Memory allocation failed. Exiting...\n");
return 1;
}
// Initialize the array with values
for (int i = 0; i < n; i++) 
{
dynamicArray[i] = i * 10;
}
// Print the array
printf("Dynamic Array: ");
for (int i = 0; i < n; i++) 
{
printf("%d ", dynamicArray[i]);
}
// Don't forget to free the allocated memory when done
free(dynamicArray);
return 0;
}