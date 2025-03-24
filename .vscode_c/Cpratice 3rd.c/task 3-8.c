#include <stdio.h>
int main()
{
    float C, F;
    
    printf("섭씨 온도를 입력하세요: ");
    scanf_s("%f", &C);
    
    F = (C * 9 / 5) + 32;
    printf("화씨 온도: %.2f", F);
}