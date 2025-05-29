#include <stdio.h>
const int SIZE = 100;

int main()
{
    char s[SIZE];

    gets(s);
    for (int i = 0; i < SIZE && s[i]; i++) // i가 최대 크기보다 커지거나 s[i]가 널 문자이면 반복문 종료
    {
        if (s[i] >= 'a' && s[i] <= 'z') // s[i]가 소문자면
        {
            s[i] = s[i] - 32; // 아스키코드 (소문자 - 대문자) = 32(항상) -> 모든 소문자 아스키코드에서 32를 빼서 대문자로 바꿔줌
        }
    }
    puts(s);

    return 0;
}