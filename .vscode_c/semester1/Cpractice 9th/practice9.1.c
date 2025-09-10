#include <stdio.h>
void decide(int k, int e, int m);

int main()
{
    int korean, english, math;
    printf("국어: ");
    scanf_s("%d", &korean);
    printf("영어: ");
    scanf_s("%d", &english);    
    printf("수학: ");
    scanf_s("%d", &math);

    decide(korean, english, math);
    return 0;

}

void decide(int k, int e, int m)
{
    int sum = k + e + m;

    if (k >= 40 && e >= 40 && m >= 40)
    {
        if ((sum / 3) >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    else
    {
        printf("Fail\n");
    }
}
