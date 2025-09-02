#include <bits/stdc++.h>
using namespace std;

void bfs(const vector<int> graph, int star);

int main()
{
    int N, a, b; // 노드 개수, 앞, 뒷값
    cin >> N;

    vector<int> A(N); // 인접 리스트

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        a--; b--; // 실제값에서 1빼서 0기반 인덱스로 만들기
        // 트리는 무방향 그래프이므로 양쪽 방향 다 넣기
        A[a].push_back(b);
        A[b].push_back(a);
    }

    vector<int> ans(N); // 부모 노드 기록용 벡터
    vector<bool> vis(N, false); // 방문용 벡터
    queue<int> q;

    // 부모 노드 찾기 코드
    
    
    return 0;
}

void bfs(const vector<int> graph, int star)
{
    
}