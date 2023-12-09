#include<stdio.h>
int main()
{
    char ch1,ch2;
    scanf("%c %c",&ch1,&ch2);
    char temp=ch1;
    ch1=ch2;
    ch2=temp;
    printf("%c %c",ch1,ch2);
    return 0;
}