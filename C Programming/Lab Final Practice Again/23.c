#include<stdio.h>
int main()
{
    int hexadecimal=0,binary,base=1,remainder;
    scanf("%d",&binary);
    while(binary !=0)
    {
        remainder=binary%10;
        hexadecimal= hexadecimal+ base*remainder;
        binary=binary/10;
        base =base*2;
    }
    printf("%X",hexadecimal);
    return 0;
}