#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

golf::golf() // 선수 이름과 핸디캡 초기화
{
    fullname[0] = '\0';
    handicap = 0;
}

golf::golf(const char* name, int hc) // 사용자에게 입력받은 값들 멤버 데이터에 저장
{
    strncpy(fullname, name, (len - 1));
    fullname[len - 1] = '\0'; // 읽기전용 데이터이므로 마지막 반드시 널문자로 종료
    handicap = hc;
}

bool golf::setgolf() // 사용자로부터 입력 요청
{
    char temp[len];

    cout << "골프 선수 이름을 입력하세요: ";
    cin.getline(temp, len);
    
    if (temp[0] == '\0')
        return false;
    
    strncpy(fullname, temp, len - 1);
    fullname[len - 1] = '\0';  

    cout << "핸디캡을 입력하세요: ";
    cin >> handicap;
    cin.get(); // 개행 문자 처리
    
    return true;
}

void golf::sethandicap(int hc)
{
    handicap = hc;
}

// golf 구조체 내용을 출력하는 함수
void golf::showgolf() const
{
    cout << "이름: " << fullname << endl;
    cout << "핸디캡: " << handicap << endl;
}