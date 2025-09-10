#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} Location;

double square(double a)
{
    return a * a;
}

double Distance(Location a, Location b)
{
    double distance = sqrt(square(a.x - b.x) + square(a.y - b.y));
    return distance;
}

int main()
{
    Location A, B;
    printf("첫번째 좌표: ");
    scanf_s("%lf %lf", &A.x, &B.y);
    printf("두번째 좌표: ");
    scanf_s("%lf %lf", &A.x, &B.y);

    printf("거리: %.2lf", Distance(A, B));
    return 0;
}