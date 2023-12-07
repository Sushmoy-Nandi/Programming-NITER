#include <stdio.h>
struct DonationRecord 
{
    char patientName[50];
    char location[50];
    char date[20];
};
int main() 
{
    int n;  // Number of records
    //printf("Enter the number of blood donation records: ");
    scanf("%d", &n);
    // Declare an array of structures to store donation records
    struct DonationRecord records[n];
    // Input blood donation information for each record
    for (int i = 0; i < n; i++) 
    {
        //printf("Enter details for donation record %d:\n", i + 1);
        //printf("Patient Name: ");
        scanf("%s", records[i].patientName);
        //printf("Location: ");
        scanf("%s", records[i].location);
        //printf("Date: ");
        scanf("%s", records[i].date);
        //printf("\n");
    }
    // Create a file to store donation records
    FILE *file = fopen("blood_donation_records.txt", "w");
    // Check if the file was opened successfully
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1; // Exit with an error code
    }
    // Write donation records to the file
    for (int i = 0; i < n; i++) {
        fprintf(file, "Record %d:\n", i + 1);
        fprintf(file, "Patient Name: %s\n", records[i].patientName);
        fprintf(file, "Location: %s\n", records[i].location);
        fprintf(file, "Date: %s\n\n", records[i].date);
    }
    // Close the file
    fclose(file);
    printf("Blood donation records have been successfully stored in the file.\n");
    return 0;
}
