#include<stdio.h>
int main()
{
int k;
for (int i = 50; i <= 100; i = i + 1) 
{
int remainder = i % 4;
if (remainder == 0) 
{
k = 0;
} 
else if (remainder == 1) 
{
k = 1;
} 
else if (remainder == 2) 
{
k = 2;
} 
else 
{
k = 3;
}
}
return 0;
}