#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int *ptr=ar;
    ptr=&ar[0];
    printf("value of 0th index %d\n",*(ptr+0));
    printf("value of 1th index %d\n",*(ptr+1));
    printf("value of 2th index %d\n",*(ptr+2));
    printf("value of 3th index %d\n",*(ptr+3));
    printf("value of 4th index %d\n",*(ptr+4));
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}