#include <stdio.h>

int main()
{
    int N, even = 0, odd = 0;
    printf("N 입력: ");
    scanf_s("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &arr[i]);
        if (arr[i] % 2 == 0) // 짝수
        {
            even++;
        }
        else if (arr[i] % 2 == 1) // 홀수
        {
            odd++;
        }
    }
    printf("홀수: %d, 짝수: %d", odd, even);
    return 0;
}