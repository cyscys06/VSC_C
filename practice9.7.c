#include <stdio.h>
int swap(int * n1, int * n2);

int main()
{
    int a, b;
    printf("두 정수 a, b 입력: ");
    scanf_s("%d %d", &a, &b);
    printf("before: a = %d, b = %d\n", a, b);
    
    swap(&a, &b); // 둘이 바꿈
    printf("after: a = %d, b = %d\n", a, b);

    return 0;
}

int swap(int * n1, int * n2) // n1: a n2: b
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    return *n1, *n2; // n1: b n2: a
}