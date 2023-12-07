#include <stdio.h>
// Define the structure for a student
struct Student 
{
    int id;
    char name[50];
    float mark;
};
int main() 
{
    int n;
    // Input the number of students
    //printf("Enter the number of students: ");
    scanf("%d", &n);
    // Declare an array of structures to store student details
    struct Student students[n];

    // Input details for each student
    for (int i = 0; i < n; i++) 
    {
        //printf("Enter details for student %d:\n", i + 1);
        //printf("ID: ");
        scanf("%d", &students[i].id);
        //printf("Name: ");
        scanf("%s", students[i].name);
        //printf("Mark: ");
        scanf("%f", &students[i].mark);
        //printf("\n");
    }
    // Display details for each student
    printf("Details of all students:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Mark: %.2f\n", students[i].mark);
        printf("\n");
    }
    return 0;
}
