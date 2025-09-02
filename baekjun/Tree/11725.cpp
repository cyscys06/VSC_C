#include <bits/stdc++.h>
using namespace std;

// BFS 풀이
int main()
{
    int N, a, b; // 노드 개수, 앞, 뒷값
    cin >> N;

    vector<int> graph(N); // 인접 리스트

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        a--; b--; // 실제값에서 1빼서 0기반 인덱스로 만들기
        // 트리는 무방향 그래프이므로 양쪽 방향 다 넣기
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> ans(N); // 부모 노드 기록용 벡터
    vector<bool> vis(N, false); // 방문용 벡터
    queue<int> q;

    // 부모 노드 찾기 코드
    
    q.push(1);
    vis[0] = true;  

    while(!(q.empty()))
    {
        int parent = q.front(); 
        q.pop();

        for (int i = 0; i < graph[parent].size(); i++) // 연결 정보를 저장한 A 벡터의 부모 노드와 연결된 자식 노드의 개수만큼 반복
        {
            int child = graph[parent][i];
        } 
    }

    return 0;
}
