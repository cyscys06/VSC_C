#include <stdio.h>

int main()
{
    int N, num, count;
    printf("입력할 정수의 개수: ");
    scanf_s("%d", &N);
    while (N < 0 || N > 100)
    {
        printf("지정된 범위를 벗어났습니다. 다시 입력하십시오.\n");
        scanf_s("%d", &N);
    }
    
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &num);
        if (num % 2 == 0)
        {
            count++;
        }
    }
    printf("입력한 짝수의 개수: %d\n", count);

    return 0;
}