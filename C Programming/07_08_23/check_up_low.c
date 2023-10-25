#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("LOWERCASE");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("UPPERCASE");
    }
    else
    {
        printf("DIGIT");
    }
    return 0;
}