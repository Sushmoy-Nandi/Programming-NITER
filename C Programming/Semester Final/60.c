#include <stdio.h>
int main() 
{
    FILE *file;
    // Create a file named "example.txt" for writing
    file = fopen("example.txt", "w");
    // Check if the file is opened successfully
    if (file == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;  // Exit the program with an error code
    }
    // Perform operations on the file (e.g., write data)
    // Close the file
    fclose(file);
    return 0;  // Exit the program with success
}
