#include <stdio.h>

int sequence(int n);

int main()
{
    int num;    
    printf("몇 번째까지 피보나치 수열을 구할까요? : ");
    scanf_s("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d번째 수%d\n", i, sequence(i));
    }
}

int sequence(int n)
{
    if (n == 0) // 대입 연산자와 헷갈리지 말것
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else 
    {
        return sequence(n - 1) + sequence(n - 2);
    }
}