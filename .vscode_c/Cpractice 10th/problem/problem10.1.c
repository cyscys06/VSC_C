#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("문자열을 입력하세요: ");
    gets(str);
    
    int len = strlen(str);
    bool palindrome = true;

    for (int i = 0; i <= (len / 2); i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = false; // 플래그 만들어놓고 조건 한번이라도 불만족시 플래스 false로 바꾸기
        }
    }

    if (palindrome == true)
    {
        printf("회문입니다.");
    }
    else
    {
        printf("회문이 아닙니다.");
    }

    return 0;
}