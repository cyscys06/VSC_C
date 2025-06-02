#include <stdio.h>
struct student
{
    int id;
    char name[20];
};

int main()
{
    int i;
    struct student s1 = {123456, "choi"};
    struct student s2 = s1; // s1 구조체의 모든 멤버들이 s2에 그대로 복사됨(구조체 그대로의 치환은 허용됨)
    // 단, 구조체끼리의 비교는 불가(구조체의 멤버들끼리 각각 비교해야 함)
    s1.id = 3333; 
    printf("s1.id: %d, s1.name: %s\n", s1.id, s1.name);
    printf("s2.id: %d, s2.name: %s", s2.id, s2.name);

    return 0;
}