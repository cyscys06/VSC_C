#include <stdio.h>
int factorial(int n);

int main()
{
    int num, result;
    printf("정수 입력:");
    scanf_s("%d", &num);

    result = factorial(num);
    printf("%d팩토리얼 값: %d", num, result);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}