#include <stdio.h>
int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr; 
    ptr = arr;
    for (int i = 0; i < 5; i++) 
    {
        printf("Element %d: %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}
