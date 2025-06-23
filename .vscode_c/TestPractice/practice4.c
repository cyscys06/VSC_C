#include <stdio.h>

typedef struct 
{
    char name[30];
    int price;
} Product;

int main()
{
    int N;
    int count = 0;

    printf("N 입력: ");
    scanf_s("%d", &N);
    
    Product p[N];
    for (int i = 0; i < N; i++)
    {
        scanf_s("%s %d", p[i].name, (unsigned)sizeof(p[i].name),  &p[i].price);
        count += p[i].price;
    }
    printf("평균가격: %d", count / N);
    return 0;
}