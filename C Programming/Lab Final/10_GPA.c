#include <stdio.h>
int main() 
{
    int totalSubjects;
    float totalGradePoints = 0.0;
    //printf("Enter the total number of subjects: ");
    scanf("%d", &totalSubjects);
    for (int i = 1; i <= totalSubjects; ++i) 
    {
        char grade;
        float gradePoint;
        //printf("Enter the letter grade for subject %d (A, B, C, D, or F): ", i);
        scanf(" %c", &grade); // Note the space before %c to consume any leading whitespace
        if (grade == 'A') 
        {
        gradePoint = 4.0;
        } 
        else if (grade == 'B') 
        {
        gradePoint = 3.0;
        } 
        else if (grade == 'C') 
        {
        gradePoint = 2.0;
        } 
        else if (grade == 'D') 
        {
        gradePoint = 1.0;
        } 
        else if (grade == 'F') 
        {
        gradePoint = 0.0;
        } 
        else 
        {
        printf("Invalid grade entered. Please enter A, B, C, D, or F.\n");
        --i; // Decrement i to repeat the same subject
        continue;
        }
        totalGradePoints += gradePoint;
    }
    // Calculate GPA
    float gpa = totalGradePoints / totalSubjects;
    printf("Your GPA is: %.2f\n", gpa);
    return 0;
}
