#include <stdio.h>

int main()
{
    int total = 0;
    for (int i = 2; i <= 100; i += 2)
    {
        total += i;
    }
    printf("\n%d", total);
}