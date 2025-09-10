#include <stdio.h>

struct point
{
    int x, y;
};

int main()
{
    struct point a[3];
    
    for (int i = 0; i < 3; i++)
    {
        a[i].x = i * 2;
        a[i].y = i * 3;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("a[%d].x: %d, a[%d].y: %d\n", i, a[i].x, i, a[i].y);
    }
    return 0;
}