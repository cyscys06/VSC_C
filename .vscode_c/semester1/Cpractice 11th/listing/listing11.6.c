#include <stdio.h>

enum weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
// Sunday에 0이라는 정수값이 부여(앞으로 Sunday는 0을 의미), 그 뒤의 원소마다 숫자가 1씩 늘어남
// 만약 Sunday에 어떤 디폴트값이 있다면 그 디폴트값에 1씩 더해서 부여
struct Class // C++ 에서 class는 예약어라 C/C++ 공용 컴파일러에서 동시에 사용 불가
{
    char subject[20];
    enum weekday classday;
    int credit;
};

int main()
{
    struct Class comp = {"C programming", Friday, 3}; // Friday는 5를 의미
    printf("%s(%d credits) are on %d\n", comp.subject, comp.credit, comp.classday); // 열거체에 의해 classday멤버는 정수를 의미하게 되므로 %d로 출력 가능
    return 0;
}
