#include <stdio.h>
int main() 
{
    int a,b,c,d,largest;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b) 
    {
        if(a>=c) 
        {
            if(a>=d) 
            {
                largest=a;
            } 
            else 
            {
                largest=d;
            }
        } 
        else 
        {
            if(c>=d) 
            {
                largest=c;
            } 
            else 
            {
                largest=d;
            }
        }
    } 
    // else 
    // {
    //     if(b>=c) 
    //     {
    //         if(b>=d) 
    //         {
    //             largest=b;
    //         } 
    //         else 
    //         {
    //             largest=d;
    //         }
    //     } 
    //     else 
    //     {
    //         if(c>=d) 
    //         {
    //             largest=c;
    //         } 
    //         else 
    //         {
    //             largest=d;
    //         }
    //     }
    // }

    printf("The largest number is: %d\n", largest);

    return 0;
}
