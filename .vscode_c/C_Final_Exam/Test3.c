#include <stdio.h>
#include <string.h>
const int SIZE = 30;

typedef struct
{
    char name[SIZE];
    int score;
} Student;

int main()
{
    int N;
    printf("학생의 수 입력: ");
    scanf_s("%d", &N);
    if (N < 2 || N > 10)
    {
        printf("유효한 학생의 수를 입력하세요: N\n");
        return 0;
    }
    Student s[N];

    for (int i = 0; i < N; i++)
    {
        scanf_s("%s %d", s[i].name, (unsigned)sizeof(s[i].name), &s[i].score);
    }

    int max_score = s[0].score;
    char max_name[SIZE];
    for (int i = 0; i < N; i++)
    {
        if (max_score < s[i].score)
        {
            max_score = s[i].score;
            strcpy(max_name, s[i].name);
        }
    }

    printf("우수 학생 이름: %s\n", max_name);
    printf("점수: %d\n", max_score);
    return 0;
}