#include <stdio.h>
int main() 
{
    int marks;
    scanf("%d",&marks);
    if (marks >= 80) 
    {
        printf("Pass and Grade: A+\n");
    } 
    else if (marks >= 70) 
    {
        printf("Pass and Grade: A\n");
    } 
    else if (marks >= 60) 
    {
        printf("Pass and Grade: A-\n");
    } 
    else if (marks >= 50) 
    {
        printf("Pass and Grade: B\n");
    } 
    else if (marks >= 40) 
    {
        printf("Pass and Grade: C\n");
    } 
    else
    {
        printf("Fail and Grade: F\n");
    }
    
    return 0;
}
