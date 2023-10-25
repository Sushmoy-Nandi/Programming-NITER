#include <stdio.h>
int main() 
{
    int number;
    int *ptr;
    ptr = &number;
    scanf("%d", ptr);
    printf("You entered: %d\n",*ptr);
    return 0;
}
