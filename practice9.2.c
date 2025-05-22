#include <stdio.h>
void divisor(int n);

int main()
{
    int N;
    printf("양의 정수 N 입력: ");
    scanf_s("%d", &N);
    divisor(N);

    return 0;
}

void divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            printf("%d ", i);
        }
    }
}
