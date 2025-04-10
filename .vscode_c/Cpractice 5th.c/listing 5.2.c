#include <stdio.h>
int main()
{
    int n;

    printf("정수를 입력하시오.\n");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d^3 = %d\n", i, i * i * i);
    }
    return 0;
}