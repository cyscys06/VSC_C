#include <stdio.h>
void population(int apt[][2]);
void floor_pop(int apt[][2]);

int main()
{    
    int people[5][2];
    population(people);
    floor_pop(people);

}

void population(int apt[5][2])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d층 %d호 거주인원: ", i + 1, j + 1);
            scanf_s("%d", &apt[i][j]);
        }
    }
}

void floor_pop(int apt[5][2])
{
    int floor, room, pop;
    for (floor = 0; floor < 5; floor++)
    {
        pop = 0;
        for (room = 0; room < 2; room++)
        {
            pop += apt[floor][room];
            
        }
        printf("%d층 인구 수: %d\n", floor + 1, pop);
    }
}
