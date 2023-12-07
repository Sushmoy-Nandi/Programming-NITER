#include <stdio.h>
int main() 
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    printf("Accessing elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }
    printf("\nAccessing elements using array syntax:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
