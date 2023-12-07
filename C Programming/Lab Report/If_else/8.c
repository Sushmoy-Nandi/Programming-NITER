#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if (marks >= 90)
    printf("A Grade");
    else if (marks <= 89 && marks >= 80)
    printf("B Grade");
    else if (marks <= 79 && marks >= 70)
    printf("C Grade");
    else if (marks <= 69 && marks >= 60)
    printf("D Grade");
    else
    printf("F Failed");
    return 0;
}