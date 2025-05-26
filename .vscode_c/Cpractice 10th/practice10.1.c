#include <stdio.h>
const int SIZE = 100;

int main()
{
    char s[SIZE];

    gets(s); // gets함수는 최신버전에서 불안정하다고 뜸
    puts(s);

    scanf_s("%s", s, (unsigned)sizeof(s));
    puts(s);
    printf("s = %s\n", s);

    return 0;
}