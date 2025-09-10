#include <stdio.h>

const int SIZE1 = 5;
const int SIZE2 = 2;
void population(int apt[][SIZE2]);
void floor_pop(int apt[][SIZE2]);

int main()
{    
    int people[SIZE1][SIZE2];
    population(people);
    floor_pop(people);

}

void population(int apt[][SIZE2])
{

    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            printf("%d층 %d호 거주인원: ", i + 1, j + 1);
            scanf_s("%d", &apt[i][j]);
        }
    }
}

void floor_pop(int apt[][SIZE2])
{
    int floor, room, pop;
    for (floor = 0; floor < SIZE1; floor++)
    {
        pop = 0;
        for (room = 0; room < SIZE2; room++)
        {
            pop += apt[floor][room];
            
        }
        printf("%d층 인구 수: %d\n", floor + 1, pop);
    }
}
