#include <stdio.h>
int main() 
{
    int totalSubjects;
    float totalGradePoints = 0.0;
    scanf("%d", &totalSubjects);
    for (int i = 1; i <= totalSubjects;i++) 
    {
        char grade;
        float gradePoint;
        scanf(" %c", &grade);
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
        --i;
        continue;
        }
        totalGradePoints += gradePoint;
    }
    float gpa = totalGradePoints / totalSubjects;
    printf("Your GPA is: %.2f\n", gpa);
    return 0;
}