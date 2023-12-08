#include <stdio.h>
int main() 
{
    int year;
    scanf("%d", &year);
    // Check if it's a century year and a leap year
    if (year % 100 == 0 && year % 400 == 0) 
    {
        printf("%d is a century year and a leap year.\n", year);
    }
    // Check if it's a century year but not a leap year
    else if (year % 100 == 0) 
    {
        printf("%d is a century year but not a leap year.\n", year);
    }
    // Check if it's a leap year
    else if (year % 4 == 0) 
    {
        printf("%d is a leap year.\n", year);
    }
    // If none of the above conditions are true
    else 
    {
        printf("%d is neither a century year nor a leap year.\n", year);
    }

    return 0;
}
