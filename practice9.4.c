#include <stdio.h>
int max_elem(int arr[]);
const int SIZE = 10;

int main()
{
    int result, element[SIZE];

    printf("10개의 정수 입력:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%d", &element[i]);
    }

    result = max_elem(element);
    printf("\n%d", result);
    return 0;
}

int max_elem(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}