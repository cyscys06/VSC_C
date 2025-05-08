#include <stdio.h>

int main()
{
    int x, y;
    printf("좌표(x,y): ");
    scanf_s("%d %d", &x, &y);

    if (x > 0 && y > 0) // 1사분면
    {
        printf("좌표(%d,%d)은 1사분면입니다.", x, y);
    }
    else if (x < 0 && y > 0) // 2사분면
    {
        printf("좌표(%d,%d)은 2사분면입니다.", x, y);
    }
    else if (x < 0 && y < 0) // 3사분면
    {
        printf("좌표(%d,%d)은 3사분면입니다.", x, y);
    }
    else if (x > 0 && y < 0) // 4사분면
    {
        printf("좌표(%d,%d)은 4사분면입니다.", x, y);
    }

    return 0;
}