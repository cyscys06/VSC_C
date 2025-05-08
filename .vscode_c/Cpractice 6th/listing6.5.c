#include <stdio.h>

int main()
{
    int n;
    printf("1이상 5이하의 정수 입력: ");
    scanf_s("%d", &n);

    switch (n)
    {
        case 1:
            printf("입력한 숫자: 1\n");
            break;
        case 2:
            printf("입력한 숫자: 2\n");
            break;
        case 3:
            printf("입력한 숫자: 3\n");
            break;
        case 4:
            printf("입력한 숫자: 4\n");
            break;
        case 5:
            printf("입력한 숫자: 5\n");
            break;
        default:
            printf("잘못된 입력입니다.\n");
            break;
    }

    return 0;
}