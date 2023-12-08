#include <stdio.h>
int main() 
{
    char str[1000];
    int alphabetsCount = 0, digitsCount = 0, specialCharsCount = 0;
    fgets(str, sizeof(str), stdin);
    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Check if the current character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            alphabetsCount++;
        }
        // Check if the current character is a digit
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digitsCount++;
        }
        // Check if the current character is neither alphabet nor digit (special character)
        else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
        {
            specialCharsCount++;
        }
    }
    // Print the counts
    printf("Total Alphabets: %d\n", alphabetsCount);
    printf("Total Digits: %d\n", digitsCount);
    printf("Total Special Characters: %d\n", specialCharsCount);

    return 0;
}
