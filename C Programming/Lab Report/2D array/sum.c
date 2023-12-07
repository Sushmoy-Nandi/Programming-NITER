#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d  %d",&row,&col);
    int a[row][col],b[row][col],c[row][col],d[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Add:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}