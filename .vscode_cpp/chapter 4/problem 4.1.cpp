#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    string EngF, EngL;
    char WHJ; // WHJ: 원하는 학점
    int age;
    cout << "영문 퍼스트 네임(이름):_\b";
    cin >> EngF;
    cin.get();
    cout << "영문 라스트 네임(성):_\b";
    cin >> EngL;
    cin.get();
    cout << "학생이 원하는 학점:_\b";
    cin >> WHJ;
    cout << "나이:_\b";
    cin >> age;
    
    int num1 = WHJ;
    int num2 = num1 + 1;
    char HJ = num2;
    
    string EngN = EngL + EngF;

    cout << "성명: " << EngL << ", " << EngF << endl;
    cout << "학점: " << HJ << endl;
    cout << "나이: " << age << endl;
    return 0;
}