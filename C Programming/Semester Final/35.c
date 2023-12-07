#include <stdio.h>
int main() 
{
 for (int num = 120; num >= 0; num -= 2) 
 {
 if (num == 14 || num == 98) 
 {
 continue; // skip 14 and 98
 }
 printf("%d ", num);
 }
 return 0;
}