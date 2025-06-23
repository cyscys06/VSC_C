#include <stdio.h>

int main()
{
    int N, count;
    printf("N 입력: ");
    scanf_s("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &arr[i]);
        arr[i] *= 2;
    }
    printf("2배: ");
    for (int i = 0; i < N; i++)
    {
         printf("%d ", arr[i]);
    }
    
    return 0;
}