#include<stdio.h>
int main()
{
    int binary=0,decimal,base=1,remainder;
    scanf("%d",&decimal);
    while(decimal !=0)
    {
        remainder=decimal%2;
        binary=binary +(remainder*base);
        decimal=decimal/2;
        base=base*10;
    }
    printf("%d",binary);
    return 0;
}