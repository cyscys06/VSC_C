#include <stdio.h>

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    gets(str);
    printf("입력한 문자열: %s\n", str);
}