#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("문자열 입력: ");
    scanf_s("%s", str, (unsigned)sizeof(str)); // 입력값을 str(1)에 str의 최대 크기만큼(2) 저장 가능하게 받음
    printf("입력한 문자열의 길이: %d\n", strlen(str));
    return 0;
}