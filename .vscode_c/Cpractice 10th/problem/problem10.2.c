#include <stdio.h>
#include <string.h>
#include <cctype>
const int SIZE = 26;

int main()
{
    char alphabet[SIZE] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int count[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        count[i] = 0;
    }
    
    char str[100];
    printf("문자열을 입력하세요: ");
    gets(str);
    strlwr(str); // str의 모든 문자 소문자로 변환하는 함수
    
    for (int i = 0; i < strlen(str); i++) // 모든 문자열 문자들에 대해 반복
    {
        for (int j = 0; j < SIZE; j++) // 알파벳 26개에 대해 반복
        {
            if (str[i] == alphabet[j])
            {
                count[j] += 1;
            }
        }
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%c: %d\n", alphabet[i], count[i]);
    }

    return 0;
}