#include<stdio.h>
int main()
{
    char up,low;
    scanf("%c %c",&up,&low);
    low=up+32;
    printf("%c\n",up);
    printf("%c",low);
    return 0;
}