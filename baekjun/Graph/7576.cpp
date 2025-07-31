#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col, row;
    cin >> col >> row;
    vector<vector<int>> A(col, vector<int>(row, 0)); // 격자를 2차원 벡터로 생성
    

    for (int i = 0; i < row; i++) // 토마토 입력
    {
        for (int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }

    queue<int> q; // 
    bool vis[col * row]; // 방문표시용
}