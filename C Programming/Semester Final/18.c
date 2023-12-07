// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     int x=(int)31.5/(int)6.3;
//     printf("%d\n",x);
//     printf("size=%d\n",sizeof("CSE"));
//     printf("Length=%d",strlen("CSE"));
//     return 0;
// }

#include<stdio.h>
int main()
{
    int *pc,c;
    c=22;
    printf("Address of c: %u\n",&c);
    printf("Value of c: %d\n",c);
    pc=&c;
    printf("Addrress of pointer pc: %u\n",pc);
    printf("Content of pointer pc: %d\n",*pc);
    *pc=2;
    printf("Address of c: %u\n",&c);
    printf("Value of c: %d\n",c);
    return 0;
    // Assume the memory location is : 268674
}