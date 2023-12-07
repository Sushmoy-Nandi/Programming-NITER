#include <stdio.h>
int main() 
{
    int N;
    printf("Enter the number of terms (N): ");
    scanf("%d",&N);
    double sum = 0.0;
    for (int i = 1; i <= N; i++) 
    {
        int term = 2*i - 1;
        sum += (double)term * term / (term * term * term);
    }
    printf("Sum of the series: %lf\n", sum);
    return 0;
}
