#include <stdio.h>
// Function to perform ascending order sorting of an array
void ascendingSort(int arr[], int n) 
{
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    FILE *file;
    int numbers[100], count = 0;

    // Open the file for reading
    file = fopen("sorting.txt", "w");

    // Check if the file exists
    if (file == NULL) 
    {
        printf("File not found or unable to open.\n");
        return 1;  // Exit the program with an error code
    }

    // Read numbers from the file
    while (fscanf(file, "%d", &numbers[count]) == 1) 
    {
        count++;
    }

    // Close the file
    fclose(file);

    // Perform ascending order sorting
    ascendingSort(numbers, count);

    // Open the same file for writing (it will overwrite the existing content)
    file = fopen("sorting.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) 
    {
        printf("Unable to open the file for writing.\n");
        return 1;  // Exit the program with an error code
    }

    // Write sorted numbers to the file
    for (int i = 0; i < count; i++) 
    {
        fprintf(file, "%d ", numbers[i]);
    }

    // Close the file
    fclose(file);

    printf("Numbers have been sorted and saved to the file.\n");

    return 0;  // Exit the program with success
}
