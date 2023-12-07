#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int remainder=a%b;
    printf("Remainder: %d",remainder);
    return 0;
}