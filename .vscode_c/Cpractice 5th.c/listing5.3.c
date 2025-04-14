#include <stdio.h>
int main()
{
    int n;

    printf("\n출력할 '*'의 개수를 입력하시오: ");
    scanf_s("%d", &n);
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    return 0;

    // continue, break는 그 구문이 포함된 반복문 안에서만 작용한다.
    // 즉, 이중 루프문 같은 코드에서 반복문 안 반복문에 break나 continue가 있으면 그 내부에 있는 반복문만 루프가 멈춘다(바깥 반복문은 계속 작동)
    // -> break는 반복문 딱 하나만 빠져나오는게 맞음(if문 때문에 헷갈리지 말것)
}