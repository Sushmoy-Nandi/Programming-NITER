#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    gets(str);
    int length=strlen(str);
    int isPalindroome=1;
    int i=0,j=length-1;
    for(int i=0;i<length;i++,j--)
    {
        if(str[i]!=str[j])
        {
            isPalindroome=0;
            break;
        }
    }
    if(isPalindroome)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    return 0;
}