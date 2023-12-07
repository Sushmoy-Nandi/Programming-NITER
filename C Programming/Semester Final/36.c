#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1001];
    gets(str);
    int length = strlen(str);
    int isPalindrome= 1; 
    int i=0,j=length-1;
    for (int i = 0; i < length;i++,j--) 
    {
        if (str[i] != str[j])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("The string is a palindrome.");
    }
    else
    { 
        printf("The string is not a palindrome.");
    }
    return 0;
}

// using function
// #include <stdio.h>
// #include <string.h>
// void fun(char a[])
// {
//     int st = strlen(a);
//     int ans= 1; 
//     int i=0,j=st-1;
//     for (int i = 0; i < st;i++,j--) 
//     {
//         if (a[i] != a[j])
//         {
//             ans=0;
//             break;
//         }
//     }
//     if(ans)
//     {
//         printf("YES PALINDROME");
//     }
//     else
//     { 
//         printf("NA PALINDROME NA");
//     }
// }
// int main() 
// {
//     char x[1001];
//     scanf("%s",x);
//     fun(x);
//     return 0;
// }


