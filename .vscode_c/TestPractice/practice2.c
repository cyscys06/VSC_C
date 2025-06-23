#include <stdio.h>

int main()
{
    int N, num, count;
    printf("N 입력: ");
    scanf_s("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &num);
        if (num > 0)
        {
            count++;
        }
    }
    printf("양수의 개수: %d", count);

    return 0;
}