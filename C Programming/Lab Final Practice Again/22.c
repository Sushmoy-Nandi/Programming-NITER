#include<stdio.h>
int main()
{
    int binary=0,hexadecimal,base=1,remainder;
    scanf("%X",&hexadecimal);
    while(hexadecimal!=0)
    {
        remainder=hexadecimal%2;
        binary=binary + base*remainder;
        hexadecimal=hexadecimal/2;
        base=base*10;
    }
    printf("%d",binary);
    return 0;
}