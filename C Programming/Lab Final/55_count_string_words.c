#include <stdio.h>
#include <stdbool.h>
int main() 
{
    char str[1000];
    int wordCount = 0;
    int inWord = 0;
    // Input string from the user
    fgets(str, sizeof(str), stdin);
    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Check if the current character is a space or a newline
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
        {
            inWord = 0;
        }
        // Check if the current character is an alphabet (a-z or A-Z)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            // If not already in a word, increment the word count
            if (!inWord) 
            {
                wordCount++;
                inWord = 1;
            }
        }
    }
    // Print the total number of words
    printf("Total number of words in the string: %d\n", wordCount);
    return 0;
}
