#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2); // str1에 str2를 붙여주는 함수. 함수를 쓰면 str1에 str2가 추가로 붙지만 str2는 그대로임
    printf("결과 문자열: %s\n", str1);
}