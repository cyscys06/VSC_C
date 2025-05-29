#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20]; // 가로줄 5개(문자열개수) 세로줄 20개(문자열)
    
    printf("5개의 과목명을 입력하세요:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d번째 과목: ", i + 1);
        gets(str[i]); // gets(): 입력
    }

    printf("수강중인 과목:\n");
    for(int i = 0; i < 5; i++)
    {
        puts(str[i]); // puts(): 출력
    }
    
    return 0;
}