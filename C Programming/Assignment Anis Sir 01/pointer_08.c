#include <stdio.h>
int main() 
{
    int number;
    int *ptr;
    ptr = &number;
    scanf("%d", ptr);
    if (*ptr > 0) 
    {
        printf("The entered number is positive.\n");
    } 
    else if (*ptr < 0) 
    {
        printf("The entered number is negative.\n");
    } 
    else 
    {
        printf("The entered number is zero.\n");
    }

    return 0;
}
