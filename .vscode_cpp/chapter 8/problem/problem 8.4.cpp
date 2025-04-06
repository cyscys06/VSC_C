#include <iostream>
#include <cstring>  
using namespace std;

struct stringy 
{
    char* str;  // 문자열
    int ct;     // 문자열 길이
};

// 문자열을 stringy 구조체에 설정
void set(stringy& s, const char* cstr) 
{
    s.ct = strlen(cstr);           // 길이 저장
    s.str = new char[s.ct + 1];    // 문자열 복사용 공간 확보
    strcpy(s.str, cstr);           // 문자열 복사
}

// stringy 출력 함수 (1회 또는 n회)
void show(const stringy& s, int n = 1) 
{
    for (int i = 0; i < n; ++i) 
    {
        cout << s.str << endl;
    }
}

// C-style 문자열 출력 함수 (1회 또는 n회)
void show(const char* cstr, int n = 1) 
{
    for (int i = 0; i < n; ++i) 
    {
        cout << cstr << endl;
    }
}

int main() 
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);         // 한 번 출력
    show(beany, 2);      // 두 번 출력

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);       // 변경된 testing 출력
    show(testing, 3);    // 세 번 출력
    show("Done!");       // 문자열 상수 출력

    return 0;
}
