#include <stdio.h>
int main() 
{
    int number, absoluteValue;
    scanf("%d", &number);
    // Calculate absolute value without using abs() function
    if (number < 0) 
    {
        absoluteValue = -number;
    } 
    else
    {
        absoluteValue = number;
    }
    // Print the absolute value
    printf("Absolute value: %d\n", absoluteValue);
    return 0;
}
