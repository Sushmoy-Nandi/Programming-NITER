#include<stdio.h>
int main()
{
    int ab;
    scanf("%d",&ab);
    if(ab>0)
    {
        printf("%d",ab);
    }
    else
    {
        ab=(-1)*ab;
        printf("%d",ab);
    }
    return 0;
}