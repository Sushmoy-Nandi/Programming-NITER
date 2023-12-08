#include <stdio.h>
int main() 
{
    char input;
    scanf(" %c", &input);
    // Check if the character is an uppercase letter
    if (input >= 'A' && input <= 'Z') 
    {
        printf("%c is an uppercase letter.\n", input);
    }
    // Check if the character is a lowercase letter
    else if (input >= 'a' && input <= 'z') 
    {
        printf("%c is a lowercase letter.\n", input);
    }
    // Check if the character is a digit
    else if (input >= '0' && input <= '9') 
    {
        printf("%c is a digit.\n", input);
    }
    // If the character doesn't fall into any of the above categories
    else 
    {
        printf("%c is neither an uppercase letter, nor a lowercase letter, nor a digit.\n", input);
    }

    return 0;
}
