#include <stdio.h>
int main() 
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    // Ensure that both numbers are positive
    if (num1 < 0 || num2 < 0) 
    {
        printf("Please enter positive numbers.\n");
        return 1;
    }
    // Find the GCD
    while (num1 != num2) 
    {
        if (num1 > num2) 
        {
            num1 -= num2;
        } 
        else 
        {
            num2 -= num1;
        }
    }
    // Display the GCD
    printf("GCD: %d\n", num1);
    return 0;
}
