#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};

    printf("0th index er address - %p\n",&ar[0]);
    printf("0th index er address - %p\n",ar);

    printf("0th index er value - %d\n",ar[0]);
    printf("1st index er value - %d\n",ar[1]);

    printf("-------------------------------\n");
    printf("0th index er value - %d\n",*ar);
    printf("1st index er value - %d\n",*(ar+1));
    printf("2nd index er value - %d\n",*(ar+2));
    printf("3rd index er value - %d\n",*(ar+3));
    printf("4th index er value - %d\n",*(ar+4));

    printf("%d\n",*(1+ar));
    printf("%d\n",*(ar+1));
    printf("%d\n",*(1+ar));
    printf("%d\n",ar[1]);
    printf("%d\n",1[ar]);

    return 0;
}