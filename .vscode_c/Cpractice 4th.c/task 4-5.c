#include <stdio.h>
int main()
{
    int n, A, B;
    scanf_s("%d", &n);
    A = n << 3;
    B = n >> 2;
    printf("%o %x", (A & B), (A & B));
}