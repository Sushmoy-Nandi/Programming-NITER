#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    ptr1 = str1;
    ptr2 = str2;
    scanf("%s %s",str1,str2);
    char *maximum;
    if (strcmp(ptr1, ptr2) > 0) 
    {
        maximum = ptr1;
    } 
    else 
    {
        maximum = ptr2;
    }
    printf("The maximum string between \"%s\" and \"%s\" is: \"%s\"\n", str1, str2, maximum);
    return 0;
}
