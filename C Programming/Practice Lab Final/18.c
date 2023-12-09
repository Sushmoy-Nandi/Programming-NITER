#include<stdio.h>
int main()
{
    char upercase,lowercase;
    scanf("%c %c",&upercase);
    lowercase=upercase+32;
    printf("%c\n",upercase);
    printf("%c",lowercase);
    return 0;
}