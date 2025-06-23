#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &n);
        count += n;
    }
    printf("합: %d, 출력: %d", count, count / 3);
    
    return 0;
}