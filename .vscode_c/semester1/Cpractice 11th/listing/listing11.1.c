#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
};

int main()
{
    struct student s1, s2, s3; // C에서는 구조체 변수 선언할때도 앞에 struct 일일히 다 붙여줘야함
    s1.id = 2500191;
    strcpy(s1.name, "최유성");
    printf("학번: %d, 이름: %s\n", s1.id, s1.name);
    
    return 0;
}