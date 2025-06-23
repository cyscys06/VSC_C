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
        // %c면 한글자씩 받고, 이걸로 문자열 받으려면 반복문 돌려야함
        // %s면 문자열 통째로 받아서 반복문 필요없고, 그대신 scanf_s에서 변수 이름 뒤에 입력 가능한 최대크기 지정해줘야 함
        count += p[i].price;
    }
    printf("평균가격: %d", count / N);
    return 0;
}