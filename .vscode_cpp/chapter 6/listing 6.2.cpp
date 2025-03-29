#include <iostream>
int main()
{
    using namespace std;
    char ch;

    cout << "타이핑하시면, 반복 수행하겠습니다.\n";
    cin.get(ch);
    while (ch != '.') // ch가 .면 루프 종료되도록 while문의 조건식을 설정
    {
        if (ch == '\n') // ch가 \n이면 if구문 실행
        {
            cout << ch; // ch를 출력
        }
        else // ch가 \n 아니면 else구문 실행
        {
            cout << ++ch; // ch에 1을 더한 값을 출력
        }
        cout << "\n혼란스럽게 해서 죄송합니다.\n";
        return 0;
    }




}