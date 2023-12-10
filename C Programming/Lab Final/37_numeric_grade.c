#include <stdio.h>
int main() 
{
    char grade;
    int numericGrade;

    // Get the letter grade from the user
    printf("Enter the letter grade (A, B, C, D, or F): ");
    scanf(" %c", &grade); // Note the space before %c to consume any leading whitespace

    // Convert letter grade to numeric grade
    switch (grade) 
    {
        case 'A':
        case 'a':
            numericGrade = 90;
            break;
        case 'B':
        case 'b':
            numericGrade = 80;
            break;
        case 'C':
        case 'c':
            numericGrade = 70;
            break;
        case 'D':
        case 'd':
            numericGrade = 60;
            break;
        case 'F':
        case 'f':
            numericGrade = 0;
            break;
        default:
            printf("Invalid grade entered. Please enter A, B, C, D, or F.\n");
            return 1; // Exit with an error code
    }

    // Display the numeric grade
    printf("Numeric grade: %d\n", numericGrade);

    return 0;
}
