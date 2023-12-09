#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    gets(str);
    int length=strlen(str);
    int isPalindrome=1;
    int j=length-1;
    for(int i=0;i<length;i++,j--)
    {
        if(str[i]!=str[j])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("PALINDROME NA");
    }
    return 0;
}