#include <stdio.h>
int main() 
{
    FILE *file;
    char filePath[] = "cse.txt";
    file = fopen(filePath, "r");
    if (file == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1; 
    }
    printf("File opened successfully.\n");
    fclose(file);
    return 0; 
}