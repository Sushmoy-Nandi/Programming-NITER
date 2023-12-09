#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1<0 || num2<0)
    {
        printf("Please give a positive integer");
        return 1;
    }
    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1 -=num2;
        }
        else
        {
            num2 -=num1;
        }
    }
    printf("GCD: %d",num1);
    return 0;
}