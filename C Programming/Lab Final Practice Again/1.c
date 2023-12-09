#include<stdio.h>
int main()
{
    int num,reversenum=0,remainder;
    scanf("%d",&num);
    int orginalnumber=num;
    while(num!=0)
    {
        remainder=num%10;
        reversenum= reversenum*10+remainder;
        num /=10;
    }
    //printf("%d",reversenum);
    if(orginalnumber==reversenum)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("PALINNDROME NA");
    }
    return 0;
}