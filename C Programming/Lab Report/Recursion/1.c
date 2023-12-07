#include <stdio.h>
void printNumbers(int current, int limit) 
{
    if(current <= limit) 
    {
        printf("%d ",current);
        printNumbers(current + 1, limit);
    }
}
int main() 
{
    printf("The first 50 natural numbers are: ");
    printNumbers(1,50);
    printf("\n");
    return 0;
}
