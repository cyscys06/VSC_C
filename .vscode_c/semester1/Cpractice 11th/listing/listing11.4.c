#include <stdio.h>

struct point
{
    int x, y;
};

struct point midpoint(struct point a, struct point b); // 구조체는 사용자가 정의한 자료형으로 볼 수 있으므로 함수의 매개변수로 넣을 수 있다.

int main()
{
    struct point p = {3, 4}, q = {5, 6}, m;
    m = midpoint(p, q);
    printf("중점: (%d, %d)\n", m.x, m.y);
    return 0;
}

struct point midpoint(struct point a, struct point b)
{
    struct point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

