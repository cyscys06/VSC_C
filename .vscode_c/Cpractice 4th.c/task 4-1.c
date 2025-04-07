#include <stdio.h>
int main()
{
    char ch;
    scanf_s("%c", &ch);
    printf("%d %o %x", ch, ch, ch);
    return 0;
}