#include <stdio.h>
const int SIZE = 100;

int main()
{
    char s[SIZE];
    int i;

    while (gets(s) != NULL) // gets함수에서 파일의 끝에 도달하거나 Ctrl + z를 입력하면 널문자 반환 -> 사용자가 문자열 입력 중단 시 반복문 종료
    {
        for (int i = 0; i < SIZE && s[i]; i++) // 입력 문자열 검사
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        puts(s);
    }

    return 0;
}