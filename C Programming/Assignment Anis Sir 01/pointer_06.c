#include <stdio.h>
int main() 
{
    char char1, char2;
    scanf(" %c %c", &char1,&char2);   
    char maximum;
    if (char1 > char2) 
    {
        maximum = char1;
    } 
    else 
    {
        maximum = char2;
    }
    printf("The maximum character between '%c' and '%c' is: '%c'\n", char1, char2, maximum);
    return 0;
}
