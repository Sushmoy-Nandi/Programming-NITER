#include<stdio.h>
int returns_area(int p,int q)
{
    int ractagle_area;
    ractagle_area=p*q;
    return ractagle_area;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int area=returns_area(x,y);
    printf("%d",area);
    return 0;
}