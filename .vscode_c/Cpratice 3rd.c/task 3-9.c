#include <stdio.h>
int main()
{
    float totalSeconds, hours, minutes, seconds;
    printf("시간(초)를 입력하시오: ");
    scanf_s("%f", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds;

    printf("시간: %.2f\n", hours);
    printf("분: %.2f\n", minutes);
    printf("초: %.2f\n", seconds);
}