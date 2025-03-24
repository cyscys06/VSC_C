#include <stdio.h>
int main()
{
    int width, height, area;
    printf("\n밑변을 입력하세요: ");
    scanf_s("%d", &width); // 참조연산자(&a): 변수 a에 있는 데이터를 참조(사용)할 수 있게 해준다.
    printf("높이를 입력하세요: ");
    scanf_s("%d", &height);
    
    area = width * height / 2;
    printf("삼각형의 넓이: %d", area);
}