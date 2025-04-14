#include <stdio.h>

int main()
{
    int n, j = 0;
    printf("\n정수를 입력하시오: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) // 4줄
    {
        while ((n - j) != 0)
        {
            printf(" ");
            j++;
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
        j = i;
    }
    return 0;
}