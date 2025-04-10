#include <stdio.h>
int main()
{
    long fact = 1;
    int n;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d! = %d\n", i, 1);
        }
        else
        {
            fact *= i;
            printf("%d! = %d\n", i, fact);
        }
    }
    printf("프로그램 종료");
    return 0;

    // continue, break는 그 구문이 포함된 반복문 안에서만 작용한다.
    // 즉, 이중 루프문 같은 코드에서 반복문 안 반복문에 break나 continue가 있으면 그 내부에 있는 반복문만 루프가 멈춘다(바깥 반복문은 계속 작동)
}