#include <stdio.h>

int main()
{
    int n;

    printf("\n정수를 입력하시오: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}