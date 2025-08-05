#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) // puddles 크기는 기본적으로 m, n이고 물웅덩이 좌표까지 담겨있음
{
    int answer = 0;
    
    // puddles 인덱스값 모두 0으로 초기화
    for (int i = 0; i < puddles.size(); i++)
    {
        for (int j = 0; j < puddles[i].size(); j++)
        {
            puddles[i][j] = 0;
        }
    }

    // 현재 좌표 인덱스 = 이전 좌표들(현재좌표 기준 위쪽과 왼쪽에 있는 좌표들)의 인덱스 값들을 더한 것
    for (int i = 0; i < puddles.size(); i++)
    {
        for (int j = 0; j < puddles[i].size(); j++)
        {
            
        }
    }

    return answer;
}