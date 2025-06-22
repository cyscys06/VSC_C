#include <stdio.h>

typedef struct {double x, y;} Point;
typedef struct {Point a, b;} Rectangle;

Point centroid(Rectangle r);
double area(Rectangle r);

int main()
{
    Rectangle r;
    puts("첫번째 좌표 입력(x, y): ");
    scanf_s("%lf %lf", &r.a.x, &r.a.y);

    while (1)
    {
        puts("\n두번째 좌표 입력(x, y): ");
        scanf_s("%lf %lf", &r.b.x, &r.b.y);
        if (r.a.x < r.b.x && r.a.y < r.b.y)
        {
            break;
        }
        else
        {
            printf("[알림] 두번째 좌표의 x와 y는 첫번째 좌표보다 반드시 커야합니다.\n");
        }
    }

    Point center = centroid(r);
    printf("\n중심점 = (%.2lf, %.2lf)\n", center.x, center.y);
    printf("사각형의 넓이 = %.2lf\n", area(r));

    return 0;
}

Point centroid(Rectangle r)
{
    return (Point) { (r.a.x + r.b.x) / 2.0, (r.a.y + r.b.y) / 2.0 };
}

double area(Rectangle r)
{
    return (r.b.x - r.a.x) * (r.b.y - r.a.y);
}
