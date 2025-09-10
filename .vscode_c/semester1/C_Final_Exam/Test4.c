#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("동적할당 크기 입력: ");
    scanf_s("%d", &N);
    int * arr = (int*)malloc(sizeof(int) * N);
    
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    printf("배열을 역순으로 출력:\n");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}