#include<stdio.h>
int main()
{
    int num,binary=0,remainder=0,place=1;
    //printf("Enter a decimal number\n");
    scanf("%d",&num);
    printf("Binary equivalent of %d is ",num);
    while (num !=0)
    {
        remainder=num%2;
        num=num/2;
        binary=binary+(remainder*place);
        place=place*10;
    }                                                                       
    printf("%d\n",binary);
    return 0;
}