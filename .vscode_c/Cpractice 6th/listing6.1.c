#include <stdio.h>

int main()
{
    int num;
    printf("층수를 입력하시오: ");
    scanf_s("%d", &num);

    if (num == 1)
    {
        printf("1층에 도착했습니다.");
    }

    if (num == 2)
    {
        printf("2층에 도착했습니다.");
    }

    if (num == 3)
    {
        printf("3층에 도착했습니다.");
    }

    if (num == 4)
    {
        printf("4층에 도착했습니다.");
    }

    if (num == 5)
    {
        printf("5층에 도착했습니다.");
    }

    return 0;
}