#include <stdio.h>

int main()
{
    int option;
    double a, b;

    printf("1. 덧셈\n 2. 뺄셈\n 3. 곱셈\n 기타. 나눗셈\n");
    
    printf("선택지를 입력하시오: ");
    scanf_s("%d", &option);
    printf("두개의 실수를 입력하시오: ");
    scanf_s("%lf %lf", &a, &b);

    if (option == 1)
    {
        printf("%lf + %lf = %lf", a, b, a + b);
    }
    else if (option == 2)
    {
        printf("%lf - %lf = %lf", a, b, a - b);
    }
    else if (option == 3)
    {
        printf("%lf * %lf = %lf", a, b, a * b);
    }
    else
    {
        printf("%lf / %lf = %lf", a, b, a / b);
    }

    return 0;
}