#include <stdio.h>
int main() 
{
    int month;
    // Get the month from the user
    //printf("Enter the month (1-12): ");
    scanf("%d", &month);
    // Determine the season based on the month
    if (month >= 1 && month <= 12) 
    {
        if (month >= 3 && month <= 5) 
        {
            printf("Spring\n");
        } else if (month >= 6 && month <= 8) 
        {
            printf("Summer\n");
        } else if (month >= 9 && month <= 11) 
        {
            printf("Fall\n");
        } 
        else 
        {
            printf("Winter\n");
        }
    } 
    else 
    {
        printf("Invalid month entered. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
