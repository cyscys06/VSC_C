#include <stdio.h>

double Average(const int * N, const int * sum);

int main()
{
    int N, sum = 0, max, max_location;
    printf("입력할 개수 N 입력: ");
    scanf_s("%d", &N);

    int arr[N];
    printf("정수 입력: ");
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        max = arr[0];
        if(max < arr[i])
        {
            max = arr[i];
            max_location = i;
        }
    }

    printf("총합: %d\n", sum);
    printf("평균: %.2lf\n", Average(&N, &sum));
    printf("최대값 위치: %d", max_location);

    return 0;
}

double Average(const int * N, const int * sum)
{
    double average;
    average = (double)*sum / (double)*N;
    
    return average;
}