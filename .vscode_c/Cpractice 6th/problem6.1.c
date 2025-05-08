#include <stdio.h>

int main()
{
    int score;
    printf("\n시험 점수를 입력하십시오: ");
    scanf_s("%d", &score);

    if (score >= 90)
    {
        printf("학점 A");
    }
    else if (score >= 80 && score < 90)
    {
        printf("학점 B");
    }
    else if (score >= 70 && score < 80)
    {
        printf("학점 C");
    }
    else if (score >= 60 && score < 70)
    {
        printf("학점 D");
    }
    else
    {
        printf("불합격입니다.");
    }
    return 0;
}