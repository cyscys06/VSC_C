#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("N 입력: ");
    scanf_s("%d", &N);
    int * arr = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &arr[i]); // %d로 받으므로(%s가 아니므로) arr[i]에 &붙여야됨
    }
    
    printf("역순 2배 출력: ");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", 2 * arr[i]);
    }
    
    free(arr);
    return 0;
}