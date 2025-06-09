// 구조체와 열거형 변수 활용
#include <string.h>
#include <stdio.h>

typedef enum{KOREAN = 100, ENGLISH, LAW, CSIE = 200} Dept;
typedef struct 
{
    int id;
    char name[20];
    Dept dept;
} Student;

int main()
{
    Student list[10];
    int n = 0, cnt[256] = { 0 };
    puts("입력(학생ID 학생이름 학과코드): ");
    while (n < 10 && scanf("%d %19s %d", &list[n].id, list[n].name, (int*)&list[n].dept) == 3)
    {
        cnt[list[n++].dept]++;
    }
    printf("\n학과 별 학생 수\n");
    for (int i = KOREAN; i <= CSIE; i++)
    {
        int d = Dept[i];
        if (cnt[d])
        {
            printf("%3d: %d 명\n", d, cnt[d]);
        }
    }
    return 0;
}