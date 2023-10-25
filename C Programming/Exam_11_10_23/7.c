#include <stdio.h>
#include <string.h>
void fun(char a[])
{
    int st = strlen(a);
    int ans= 1; 
    int i=0,j=st-1;
    for (int i = 0; i < st;i++,j--) 
    {
        if (a[i] != a[j])
        {
            ans=0;
            break;
        }
    }
    if(ans)
    {
        printf("YES PALINDROME");
    }
    else
    { 
        printf("NA PALINDROME NA");
    }
}
int main() 
{
    char x[1001];
    scanf("%s",x);
    fun(x);
    return 0;
}
