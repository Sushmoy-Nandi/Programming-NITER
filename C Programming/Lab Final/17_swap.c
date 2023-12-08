#include <stdio.h>
int main() 
{
    char char1,char2;
    scanf(" %c %c",&char1,&char2);
    // Display the characters before swapping
    printf("Before Swapping:\n");
    printf("First character: %c\n", char1);
    printf("Second character: %c\n", char2);

    // Swap the values of the characters
    char temp = char1;
    char1 = char2;
    char2 = temp;

    // Display the characters after swapping
    printf("\nAfter Swapping:\n");
    printf("First character: %c\n", char1);
    printf("Second character: %c\n", char2);

    return 0;
}
