#include <iostream>
int main()
{
    using namespace std;
    char EngF[20], EngL[20];
    char WHJ; // WHJ: 원하는 학점
    int age;
    cout << "영문 퍼스트 네임(이름):_\b";
    cin.get(EngF, 20);
    cin.get();
    cout << "영문 라스트 네임(성):_\b";
    cin.get(EngL, 20);
    cin.get();
    cout << "학생이 원하는 학점:_\b";
    cin >> WHJ;
    cout << "나이:_\b";
    cin >> age;
    
    int num1 = WHJ;
    int num2 = num1 + 1;
    char HJ = num2;
    cout << HJ << endl;
}