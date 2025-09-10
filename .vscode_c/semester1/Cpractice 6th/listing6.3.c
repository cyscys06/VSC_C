#include <stdio.h>

int main()
{
    double a, b;
    printf("두 실수를 입력: ");
    scanf_s("%lf %lf", &a, &b);

    if (a > b)
    {
        printf("%lf가 %lf보다 큽니다.\n", a, b);
    }
    else if (a < b)
    {
        printf("%lf가 %lf보다 작습니다.\n", a, b);
    }
    else
    {
        printf("두 실수가 같습니다.\n");
    }

    return 0;
}