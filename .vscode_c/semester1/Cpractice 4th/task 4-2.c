#include <stdio.h>
int main()
{
    int N, a, b;
    scanf_s("%d", &N);
    a = N << 2;
    b = N >> 2;
    printf("%d %d %d", a, b, a ^ b);
}