#include <stdio.h>

int main()
{
    char option;
    int a, b;
    
    printf("연산자: ");
    scanf_s("%c", &option);
    printf("피연산자: ");
    scanf_s("%d %d", &a, &b);

    switch (option)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("잘못된 입력입니다.");
        break;
    }
}