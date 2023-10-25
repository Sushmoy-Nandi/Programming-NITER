#include <stdio.h>
int main() 
{
    int num1,num2,num3;
    int max,min;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2&&num1>=num3)
    {
        if(num1<=num2&&num1<=num3) 
    {
        min=num1;
    }
        max=num1;
    } 
    else if(num2>=num1&&num2>=num3) 
    {
        if(num2<=num1&&num2<=num3) 
    {
        min=num2;
    } 
        max=num2;
    } 
    else 
    { 
        if(!max)
        {
            min=num3;
        }
        max=num3;
    }
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d\n",min);

    return 0;
}
