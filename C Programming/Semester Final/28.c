// #include <stdio.h>
// int main() 
// {
//     int n;
//     //printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int firstTerm = 7;
//     int commonDifference = 7;
//     // Calculate the last term
//     int lastTerm = firstTerm + (n - 1) * commonDifference;
//     // Use the formula for the sum of an arithmetic series
//     int sum = (n * (firstTerm + lastTerm)) / 2;
//     printf("Sum of the series: %d\n", sum);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int j=7*i;
        sum+=j;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
