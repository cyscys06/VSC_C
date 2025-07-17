#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(string name) 
{
    int answer = 0;
    int len = name.length();

    // 1. 위/아래 조작 수 계산
    for (char c : name) 
    {
        answer += min(c - 'A', 'Z' - c + 1);
    }

    // 2. 좌/우 이동 최소 계산
    int move = len - 1; // 오른쪽으로만 갈 경우

    for (int i = 0; i < len; i++) 
    {
        int next = i + 1;

        // 연속된 A 구간 찾기
        while (next < len && name[next] == 'A') 
        {
            next++;
        }

        // i까지 갔다가 되돌아가고, 다시 끝까지 가는 경우 비교
        // i: 현재 위치, next: A 구간 이후의 첫 문자가 있는 위치
        move = min(move, i + i + (len - next));              // ⭠⭢ 방향
        move = min(move, (len - next) * 2 + i);              // ⭢⭠ 방향
    }

    answer += move;
    return answer;
}

int main() 
{
    string name;
    cin >> name;
    cout << solution(name);
    return 0;
}
