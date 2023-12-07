#include<stdio.h>
int main()
{
    int a[7]={11,12,13,14,15,16,17};
    int i;
    printf("Content of array ");
    for(i=0;i<=6;++i)
    {
        printf("%d\t ",a[i]);
    }
    return 0;
}