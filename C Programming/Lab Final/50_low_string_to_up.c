#include <stdio.h>
int main() 
{
    char str[1000];
    //gets(str);
    fgets(str,sizeof(str),stdin);
    // Iterate through each character in the string and convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            // Convert to uppercase by subtracting the ASCII difference
            str[i] = str[i] - 32;
        }
    }
    // Print the uppercase string
    printf("Uppercase string: %s", str);

    return 0;
}
