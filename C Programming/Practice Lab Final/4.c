// #include<stdio.h>
// int main()
// {
//     int num,reverse=0,remainder;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         remainder=num%10;
//         reverse=reverse*10+remainder;
//         num /=10;
//     }
//     printf("Reverse Number: %d",reverse);
//     return 0;
// }

#include<stdio.h>
int reverse(int num)
{
    int reverse=0,remainder;
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num /=10;
    }
    return reverse;
}
int main()
{
    int n;
    scanf("%d",&n);
    int rev=reverse(n);
    printf("%d",rev);
    
    return 0;
}