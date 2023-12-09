#include<stdio.h>
int main()
{
    float floatNumber;
    int roundnumber;
    scanf("%f",&floatNumber);
    if(floatNumber>=0)
    {
        roundnumber=(floatNumber + 0.5);
    }
    else
    {
        roundnumber=(floatNumber - 0.5);
    }
    printf("%d\n",roundnumber);

    return 0;
}