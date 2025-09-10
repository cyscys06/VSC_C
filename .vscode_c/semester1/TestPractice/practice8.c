#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2;
    double * arr = (double*)malloc(sizeof(double) * size);
    int count = 0; // 배열 인덱스 값. 동시에 나중에 배열이 꽉찼는지를 
                   // size(배열 최대크기)랑 비교해서 확인하는 지표이기도 함
    double x, max, min;
    while (1)
    {
        scanf_s("%lf", &x); // x로 먼저 받아놓고 -1인지랑 배열 꽉찼는지 검사한 후에 
                            // 입력받은 x값을 배열에 넣어야됨
        if (x == -1)
        {
            break;
        }
        if (count == size) // 배열 크기 재할당해야될때
        {
            size *= 2;
            arr = (double*)realloc(arr, sizeof(double) * size);
        }
        arr[count] = x;
        count++; // 모든 코드가 지나간뒤에 마지막에 count를 1 증가: 
                 // 맨마지막 인덱스 값 넣고나서 count랑 size랑 같아지는 때가 오면 그때 while문 종료
    }

    if (count == 0) // 입력받은값 하나도 없으면
    {
        printf("입력된 데이터가 없습니다.\n");
        free(arr);
        return 0;
    }

    max = min = arr[0];
    for (int i = 0; i < count; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("최대: %.2lf, 최소: %.2lf", max, min);

    free(arr);
    return 0;
}