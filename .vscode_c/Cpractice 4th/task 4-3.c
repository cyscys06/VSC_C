#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, d;
    double a, b, c;
    scanf_s("%d %d", &A, &B);
    a = double(A);
    b = double(B);
    c = double(a / b) - int(A / B);
    d = int(c * 100000) + 1;
    printf("%.5f\n%d %d", double(a / b), int(A / B), d);
}