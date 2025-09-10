#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    printf("문자열 1 입력: ");
    scanf_s("%s", str1, (unsigned)sizeof(str1));
    printf("문자열 2 입력: ");
    scanf_s("%s", str2, (unsigned)sizeof(str2));

    if (strcmp(str1, str2) == 0) // str1 > str2: 양수, str1 == str2: 0, str1 < str2: 음수
    {
        printf("두 문자열은 같습니다.");
    }
    else
    {
        printf("두 문자열은 같지 않습니다.");
    }
    return 0;
}