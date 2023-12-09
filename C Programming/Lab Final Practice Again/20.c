#include<stdio.h>
int main()
{
    int decimal=0,binary,base=1,remainder;
    scanf("%d",&binary);
    while(binary!=0)
    {
        remainder=binary%10;
        decimal=decimal + remainder*base;
        binary=binary/10;
        base=base*2;
    }
    printf("%d",decimal);
    return 0;
}