#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void print_array(int (*arr)[MAX], int N); // 매개변수가 2차원 배열일때
void find_same_neighbors(int (*arr)[MAX], int N, int i, int j);

int main() 
{
    int N, i, j;
    int arr[MAX][MAX];

    printf("크기 N 입력: ");
    scanf_s("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            arr[i][j] = rand() % 10 + 1;
        }
    }

    printf("배열의 위치(i, j): ");
    scanf_s("%d %d", &i, &j);

    print_array(arr, N);
    find_same_neighbors(arr, N, i, j);
}

void print_array(int (*arr)[MAX], int N)
{
    printf("배열의 인덱스에 무작위로 할당된 값 출력:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d(%d, %d)", arr[i][j], i, j);
        }
        printf("\n");
    }
}
void find_same_neighbors(int (*arr)[MAX], int N, int i, int j)
{
    if (arr[i][j] == arr[i + 1][j])
    {
        printf("(%d, %d)", (i + 1), j);
    }
    else if (arr[i][j] == arr[i - 1][j])
    {
        printf("(%d, %d)", (i - 1), j);
    }
    else if (arr[i][j] == arr[i][j + 1])
    {
        printf("(%d, %d)", i, j + 1);
    }else if (arr[i][j] == arr[i][j - 1])
    {
        printf("(%d, %d)", i, j - 1);
    }
}