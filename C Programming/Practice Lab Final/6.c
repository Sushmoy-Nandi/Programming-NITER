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
    printf("0th index ar value %d\n",*(ptr+0));
    printf("1th index ar value %d\n",*(ptr+1));
    printf("2th index ar value %d\n",*(ptr+2));
    printf("3th index ar value %d\n",*(ptr+3));
    printf("4th index ar value %d\n",*(ptr+4));

    //elment access using loop
    printf("\nElement of the array");
    for(int i=0;i<n;i++)
    {
        printf("\n%d ",*(ptr+i)); // equivalent to ar[i]
    }
    return 0;
}