#include <stdio.h>

int main()
{
    char option;
    int a, b;
    
    printf("\n피연산자: ");
    scanf_s("%d %d", &a, &b);
    printf("연산자: ");
    scanf_s(" %c", &option); // 공백 넣는 이유: 위에서 입력 받을때 사용자가 마지막으로 공백(엔터 키) 입력 -> 공백이 입력 버퍼에 남아있음 
                             // -> 이후 %c에 사용자가 입력할 값 대신 입력버퍼에 저장됐던 공백이 대신 들어가 문제 생김 -> %c앞에 한칸 띄어씀으로써 전에 마지막으로 입력받았던 개행문자를 무시하고, 사용자가 입력한 값을 제대로 인식 가능
    switch (option)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        
        if (b != 0)
        {
            printf("%d / %d = %d", a, b, a / b);
        }
        else 
        {
            printf("0으로 나눌 수 없습니다.");
        }
        break;
    default:
        printf("잘못된 입력입니다.");
        break;
    }

    return 0;
}