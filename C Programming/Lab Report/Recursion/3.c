#include <stdio.h>
void displayNumbers(int current, int N) 
{
    if (current > N) 
    {
        return;
    } 
    else 
    {
        printf("%d ", current);
        displayNumbers(current + 1, N);
    }
}
int main() 
{
    int N;
    scanf("%d", &N);
    if (N < 1) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        printf("Numbers from 1 to %d in ascending order: ", N);
        displayNumbers(1, N);
        printf("\n");
    }
    return 0;
}
