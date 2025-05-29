#include <stdio.h>
#include <string.h>
const int SIZE = 5;

int main()
{
    char str[SIZE][100];
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("문자열을 입력하세요: ");
        scanf_s("%s", str[i], (unsigned)sizeof(str));
    }

    char max_str[100] = "";
    for (int i = 0; i < SIZE; i++)
    {
        if (strlen(max_str) < strlen(str[i]))
        {
            strcpy(max_str, str[i]); 
        }
    }

    printf("가장 긴 단어: %s\n", max_str);
    return 0;
}