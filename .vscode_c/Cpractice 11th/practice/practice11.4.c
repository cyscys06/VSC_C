#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers? ");
    scanf_s("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int)); // C++ 컴파일러도 같이 있어서 명시적 형변환(malloc함수 앞에 명시적으로 표시하는거) 해줘야됨
    if (!arr)
    {
        perror("malloc");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d-번째 배열 요소 입력: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Average = %.2lf\n", sum / n);

    free(arr);
    return 0;
}