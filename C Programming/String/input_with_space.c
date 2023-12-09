#include<stdio.h>
#include<string.h>
int main()
{
    char a[16];
    //gets(a);
    fgets(a,15,stdin);
    a[13]='\0';
    printf("%s",a);
    return 0;
}