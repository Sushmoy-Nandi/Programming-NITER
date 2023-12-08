#include <stdio.h>
int main()
{
 int numbers[] = {10, 20, 30, 40, 50};
 int *ptr = numbers;
 printf("Element at index 0 (using array notation):%d\n", numbers[0]);
 printf("Element at index 0 (using pointer notation):%d\n", *ptr);
 ptr++;
 printf("Element at index 1 (using pointer afterincrement): %d\n", *ptr);
 ptr--;
 printf("Element at index 0 (using pointer afterdecrement): %d\n", *ptr);
 ptr += 2;
 printf("Element at index 2 (using pointer after +=2): %d\n", *ptr);
 ptr -= 1;
 printf("Element at index 1 (using pointer after -=1): %d\n", *ptr);
 return 0;
}
  