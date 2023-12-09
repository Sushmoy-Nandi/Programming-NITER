#include<stdio.h>
int main()
{
    int num,reversenum=0,remainder;
    scanf("%d",&num);
    while(num !=0)
    {
        remainder=num%10;
        reversenum=reversenum*10+remainder;
        num=num/10;
    }
    if(num=+reversenum)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    
    return 0;
}