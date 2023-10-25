#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_number;
    float marks;
};
int main() 
{
    struct Student student;
    scanf("%s", student.name);
    scanf("%d", &student.roll_number);
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}

