#include <stdio.h>

int main()
{
    int n;
    int total = 0;
    printf("\n정수를 입력하시오(0 입력시 프로그램 종료):\n");
    scanf_s("%d", &n);
    do 
    {
        total += n;
        scanf_s("%d", &n);
    }
    while (n != 0); // do while문은 while문이 밑으로 옴(조건식과 블록 위치 바뀐다고 보면 됨), 마지막에 세미콜론 반드시 붙여야함(중요)
    
    printf("합계: %d\n", total);
    return 0;
}