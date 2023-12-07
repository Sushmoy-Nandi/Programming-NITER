#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int exclusive_or=a^b;
    printf("Exclusive OR: %d",exclusive_or);
    return 0;
}