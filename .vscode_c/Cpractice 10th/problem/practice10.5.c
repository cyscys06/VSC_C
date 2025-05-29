#include <stdio.h>

int main()
{
    char * str = "Pointer example";

    while (*str != '\0')
    {
        putchar(*str); // 문자열에서 한개의 문자만 출력
        putchar('\n'); // 개행
        str++; // str: 포인터 -> 포인터에 1 더함으로써 다음 문자의 주소로 넘어감
    }
    return 0;
}