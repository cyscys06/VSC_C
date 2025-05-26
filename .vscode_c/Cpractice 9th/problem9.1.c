#include <stdio.h>
void array_copy(int * arr1, int * arr2, int s);

int main()
{
    int SIZE;
    printf("크기 N 입력: ");
    scanf_s("%d", &SIZE);
    while (SIZE > 100)
    {
        printf("배열의 크기는 100까지만 지정할 수 있습니다. 다시 입력하십시오: ");
        scanf_s("%d", &SIZE);
    }
    
    int A[SIZE], B[SIZE];
    printf("배열 A 요소 입력:\n");

    for (int i = 0; i < SIZE; i++)
    {
        scanf_s("%d", &A[i]);
    }

    array_copy(A, B, SIZE);
    printf("복사된 배열 B 출력:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}

void array_copy(int * arr1, int * arr2, int s)
{
    for (int i = 0; i < s; i++)
    {
        arr2[i]= arr1[i];
    }
}