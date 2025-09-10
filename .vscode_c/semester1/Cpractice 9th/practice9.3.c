#include <stdio.h>
void prime(int n);

int main()
{
    int N;
    printf("정수 N 입력: ");
    scanf_s("%d", &N);
    prime(N);

    return 0;
}

void prime(int n)
{
    int count = 0;
    
    for (int i = 2; i == (n - 1); i++)
    {
        if ((n % i) == 0)
        {
            ++count;
        }
    }
    if (count == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite"); 
    }
}