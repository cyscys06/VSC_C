#include <stdio.h>
#define MAST 0x0F0F
int main()
{
    int val = 12345;
    int a = MAST & val;
    int b = a << 4;
    int c = MAST | b;
    printf("\n%d", c);
    printf("%f", 2 / 3);
}