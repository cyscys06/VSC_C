#include <stdio.h>

struct student
{
    int id;
    char name[20];
    int score;
};

int main()
{
    struct student stu[] = 
    {
        2025321, "choi", 45, 
        2025322, "yoo", 76,
        2025323, "sung", 77
    };
    int year;
    printf("검색할 검색연도: ");
    scanf_s("%d", &year);
    for (int i = 0; i < sizeof(stu) / sizeof(stu[0]); i++) 
    // sizeof(stu): stu 배열의 전체 크기(원소 하나의 크기 * 원소 개수)
    // sizeof(stu[0]): stu 배열의 [0]원소의 크기
    // 즉 이 둘을 나누면 원소 개수만큼의 크기가 나옴
    {
        if (stu[i].id / 1000 == year)
        {
            printf("학번: %d, 이름: %s, 점수: %d\n", stu[i].id, stu[i].name, stu[i].score);
        }
    }
    return 0;
}