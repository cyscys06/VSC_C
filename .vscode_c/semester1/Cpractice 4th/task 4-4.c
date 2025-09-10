#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, int_total;
    double z, total;
    scanf_s("%d %d %lf", &x, &y, &z); // 형식변환자 lf: double형 데이터 받음
    int res = x ^ y;
    total = double(res) + z;
    printf("%lf\n", total);
    int_total = int(total);
    printf("%d", ~int_total);
    return 0;
}