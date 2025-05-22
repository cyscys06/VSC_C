#include <stdio.h>
void reverse(int * arr);
const int SIZE = 5;

int main()
{
    int num[SIZE];
    
    printf("배열 요소 입력:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf_s("%d", &num[i]);
    }

    reverse(num);
    printf("배열 역순 출력:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

void reverse(int * arr)
{
    int * start = arr; // 시작: 배열의 이름은 첫 원소의 주소
    int * end = &arr[4]; // 끝: arr[4]의 주소
    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
        // 0, 4랑 대응 1, 3이랑 대응 2, 2랑 대응(변화없음)
    }
}