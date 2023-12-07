#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int search;
    scanf("%d",&search);
    int found=0;
    for(int i=0;i<n;i++) 
    {
        if (ar[i]==search) 
        {
            printf("%d found at index %d\n",search,i);
            found=1;
            break;
        }
    }
    if(!found) 
    {
        printf("%d not found in the array\n",search);
    }
    return 0;
}