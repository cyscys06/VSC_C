#include <stdio.h>
#include <string.h>

void print_reverse(const char str[]);

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    gets(str);

    printf("거꾸로 출력: ");
    print_reverse(str);

    return 0;
}

void print_reverse(const char str[])
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) // len - 1(배열 마지막 인덱스)부터 0(첫번째 인덱스)까지 배열의 원소들 한글자씩 거꾸로 출력
    {
        printf("%c", str[i]);
    }
    printf("\n");
}