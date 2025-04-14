#include <iostream>
#include "golf.h"
using namespace std;
const int MAX_PLAYERS = 5;  // 최대 선수 수

int main()
{
    golf ann("Ann Birdfree", 24);
    golf andy;
    golf players[MAX_PLAYERS];
    int count = 0; // 선수 수
    
    cout << "첫 번째 선수 정보 (생성자 사용):\n";
    ann.showgolf();
    cout << endl;
    
    cout << "두 번째 선수 정보 (인터랙티브 입력):\n";
    if (andy.setgolf()) // true 받으면
    {
        andy.showgolf();
        cout << endl;
    }
    
    cout << "추가 선수 정보 입력:\n";
    cout << "최대 " << MAX_PLAYERS << "명의 선수 정보를 입력할 수 있습니다.\n";
    cout << "이름 입력을 건너뛰려면 빈 라인을 입력하세요.\n\n";
    
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        cout << "선수 #" << i+1 << ":\n";
        if (players[i].setgolf() == false) // 빈 이름 입력되면
            break;  
        count++;
    }
    
    // 선수 목록 출력
    cout << "\n등록된 선수 목록 (" << count << "명):\n";
    for (int i = 0; i < count; i++)
    {
        cout << "선수 #" << (i + 1) << ":\n";
        players[i].showgolf();
        cout << endl;
    }

    if (count > 0)
    {
        cout << "첫 번째 선수의 핸디캡을 변경합니다.\n";
        players[0].sethandicap(10);
        cout << "변경 후:\n";
        players[0].showgolf();
    }
    
    cout << "\n프로그램을 종료합니다.\n";
    return 0;
}