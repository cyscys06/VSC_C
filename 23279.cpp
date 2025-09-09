#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, C, n, M = 0; // 총 숫자 개수, 그룹 개수, 그룹당 숫자 개수, 숫자, 최댓값
    cin >> N >> K;

    vector<vector<int>> G(K);
    vector<bool> flag(K, false);
    vector<pair<int, int>> A(K); // 첫째값에 새로매긴 서열, 둘째값에 원래 서열

    for (int i = 0; i < K; i++)
    {
        cin >> C;
        
        for (int j = 0; j < C; j++)
        {
            cin >> n;
            n = G[i][j];
            n = A[i].first;
        }

        sort(G[i].begin(), G[i].end());
    } 
    // 1 3 6
    // 0 5 5
    // 2 2 3 6
    
    for (int i = 0; i < N; i++)
    {
        A[i].second = i + 1;
    }
    sort(A.begin(), A.end());
    // first: 0 1 2 2 3 3 5 5 6 6 
    // second: 1 2 3 4 5 6 7 8 9 10

    for (int i = 0; i < K; i++) // 그룹 개수
    {
        for (int j = 0; j < G[i].size(); j++) // 그룹의 숫자 개수
        {
            for (int k = 0; k < A.size(); k++) // 한그룹당 모든 숫자조합을 비교하는 루프
            {
                if (G[j] == A[k].first)
                {
                    if (flag[k] == false)
                    {
                        G[j] = A[k].second;
                        flag[k] = 
                    }

                    G[j] = 
                }
            }
        }
    }

}