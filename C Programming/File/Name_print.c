#include <stdio.h>
int main() 
{
    FILE *file;
    char filePath[] = "my_name.txt";
    file = fopen(filePath, "w");
    if (file == NULL) 
    {
        printf("Error creating the file.\n");
        return 1;
    }
    char myName[] = "Sushmoy Nandi";
    if (fprintf(file, "%s", myName) < 0) 
    {
        printf("Error writing to the file.\n");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) 
    {
        printf("Error closing the file.\n");
        return 1; 
    }
    file = fopen(filePath, "r");
    if (file == NULL) 
    {
        printf("Error opening the file for reading.\n");
        return 1; 
    }
    printf("File opened successfully for reading.\n");
    char name[100];
    while (fgets(name, sizeof(name), file) != NULL) 
    {
        printf("Name: %s", name);
    }
    if (fclose(file) != 0) 
    {
        printf("Error closing the file.\n");
        return 1; 
    }
    return 0;
}