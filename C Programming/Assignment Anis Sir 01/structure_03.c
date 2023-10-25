#include <stdio.h>
struct CricketPlayer 
{
    char name[50];
    int age;
    char team[50];
    float batting_average;
};
int main() 
{
    struct CricketPlayer player;
    scanf("%s", player.name);
    scanf("%d", &player.age);
    scanf("%s", player.team);
    scanf("%f", &player.batting_average);

    printf("\nCricket Player Details:\n");
    printf("Name: %s\n", player.name);
    printf("Age: %d\n", player.age);
    printf("Team: %s\n", player.team);
    printf("Batting Average: %.2f\n", player.batting_average);

    return 0;
}
