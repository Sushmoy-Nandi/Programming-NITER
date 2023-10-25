#include <stdio.h>
struct Person 
{
    char name[50];
    int age;
    char city[50];
};
int main() 
{
    struct Person person1 = {"Sushmoy Nandi", 20, "Dhaka"};
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.city);
    return 0;
}
