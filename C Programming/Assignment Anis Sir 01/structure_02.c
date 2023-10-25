#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_number;
    float marks;
};
int main() 
{
    struct Student students[10];
    for (int i = 0; i < 10; i++) 
    {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_number);
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    return 0;
}
