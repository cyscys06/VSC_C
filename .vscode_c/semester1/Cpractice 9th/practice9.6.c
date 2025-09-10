#include <stdio.h>
const int SIZE1 = 4;
const int SIZE2 = 3;

void score(int arr[][SIZE2][SIZE2]);
void summary(int arr[][SIZE2][SIZE2]);

int main()
{
    int array[SIZE1][SIZE2][SIZE2]; // 예약어 사용 금지
    score(array);
    summary(array);

    return 0;
}

void score(int arr[][SIZE2][SIZE2])
{
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
            {
                printf("학급 %d 학생 %d의 성적: ", i + 1, j + 1);
                scanf_s("%d %d %d", &arr[i][j][0], &arr[i][j][1], &arr[i][j][2]); // 0: 언어 1: 수리 2: 외국어
            }
    }

}
void summary(int arr[][SIZE2][SIZE2])
{
    int sum1, sum2, sum3; // 언어, 수리, 외국어
    
    for (int i = 0; i < SIZE1; i++)
    {
        sum1 = 0;
        sum2 = 0;
        sum3 = 0;
        for (int j = 0; j < SIZE2; j++)
        {
            sum1 += arr[i][j][0];
            sum2 += arr[i][j][1];
            sum3 += arr[i][j][2];   
        }
        printf("학급 %d 언어 성적 평균: %d\n", i + 1, sum1 / 3);
        printf("학급 %d 수리 성적 평균: %d\n", i + 1, sum2 / 3);
        printf("학급 %d 외국어 성적 평균: %d\n", i + 1, sum3 / 3);
    }
}