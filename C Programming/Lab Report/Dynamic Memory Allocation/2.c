#include <stdio.h>
#include <stdlib.h>
int main() 
{
int *dynamicArray;
int initialSize = 3; // Initial size of the array
// Dynamically allocate memory for an integer array with an initial size
dynamicArray = (int *)malloc(initialSize * sizeof(int));
if (dynamicArray == NULL) 
{
printf("Memory allocation failed. Exiting...\n");
return 1;
}
// Initialize the array
for (int i = 0; i < initialSize; i++) 
{
dynamicArray[i] = i * 10;
}
printf("Initial Dynamic Array: ");
for (int i = 0; i < initialSize; i++) 
{
printf("%d ", dynamicArray[i]);
}
int newSize = 5; // New size for the array
dynamicArray = (int *)realloc(dynamicArray, newSize * sizeof(int));
if (dynamicArray == NULL) {
printf("Memory reallocation failed. Exiting...\n");
return 1;
}
// Initialize the newly added elements
for (int i = initialSize; i < newSize; i++) 
{
dynamicArray[i] = i * 10;
}
printf("\nDynamic Array after realloc: ");
for (int i = 0; i < newSize; i++) 
{
printf("%d ", dynamicArray[i]);
}
// Don't forget to free the memory when done
free(dynamicArray);
return 0;
}