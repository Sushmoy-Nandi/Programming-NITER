#include <stdio.h>
int main() 
{
    char uppercase,lowercase;
    // Input an uppercase character from the user
    scanf(" %c", &uppercase);
    // Convert the uppercase character to lowercase
    // The ASCII difference between uppercase and lowercase letters is 32
    lowercase = uppercase + 32;
    // Display the original and converted characters
    printf("\nOriginal Character: %c\n", uppercase);
    printf("Converted to Lowercase: %c\n", lowercase);

    return 0;
}
