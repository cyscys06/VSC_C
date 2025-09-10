#include <stdio.h>

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf_s("%s", str, (unsigned)sizeof(str));
    printf("입력한 문자열: %s\n", str);
}