// #include <stdio.h>
// int main() 
// {
//     char str[1000];
//     int vowelsCount = 0, consonantsCount = 0;
//     fgets(str, sizeof(str), stdin);

//     // Iterate through each character in the string
//     for (int i = 0; str[i] != '\0'; i++) 
//     {
//         // Check if the current character is an alphabet
//         if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
//         {
//             // Convert to lowercase for simplicity
//             char lowercaseChar = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
            
//             // Check if the lowercase character is a vowel
//             if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
//                 lowercaseChar == 'o' || lowercaseChar == 'u') 
//                 {
//                 vowelsCount++;
//             } 
//             else 
//             {
//                 consonantsCount++;
//             }
//         }
//     }

//     // Print the counts
//     printf("Total Vowels: %d\n", vowelsCount);
//     printf("Total Consonants: %d\n", consonantsCount);

//     return 0;
// }
