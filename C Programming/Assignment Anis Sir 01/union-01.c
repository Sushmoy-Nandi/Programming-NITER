#include <stdio.h>
union SampleUnion 
{
    int x;
    char y;
    float z;
};
int main() 
{
    union SampleUnion u;
    union SampleUnion *ptr1, *ptr2;
    ptr1 = &u;
    ptr2 = ptr1 + 1;
    int size = (char *)ptr2 - (char *)ptr1;
    printf("Size of the union is: %d bytes\n", size);
    return 0;
}
