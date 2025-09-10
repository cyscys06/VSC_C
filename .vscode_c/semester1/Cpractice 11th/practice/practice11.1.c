// 구조체 정의 및 입력받고 출력
#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    int dept;
};

int main()
{
    struct Student s;
    printf("학생 ID: ");
    scanf_s("%d", &s.id);
    printf("학생 이름: " );
    scanf_s("%s", &s.name, (unsigned)sizeof(s.name));
    printf("학과코드: ");
    scanf_s("%d", &s.dept);

    puts("\n=== 구조체 출력 ===");
    printf("ID: %d\nName: %s\nDept: %d\n", s.id, s.name, s.dept);

    return 0;
}