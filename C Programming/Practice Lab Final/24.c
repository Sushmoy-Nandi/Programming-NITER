#include <stdio.h>
int main() 
{
    char ch;
    scanf(" %c", &ch);
    // Check if the entered character is an uppercase vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the entered character is a lowercase vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the entered character is a consonant
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        printf("%c is a consonant.\n", ch);
    }
    // If the entered character is neither a vowel nor a consonant
    else 
    {
        printf("Invalid input.\n");
    }
    return 0;
}