// #include<stdio.h>
// int main()
// {
//     int b[]={10,20,30,40,50};
//     int i,*k;
//     k=b;
//     for(i=0;i<=4;i++)
//     {
//         printf("\n%d",*k);
//         k++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     x=2003;
//     x++;
//     y=x++;
//     y=x;
//     y++;
//     x--;
//     x--;
//     printf("%d %d",x,y);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int *a,b=30;
    a=&b;
    b=*a+40;
    *a=b%5;
    printf("%d %d",*a,b);
    return 0;
}