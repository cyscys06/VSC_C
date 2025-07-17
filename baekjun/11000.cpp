#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> Subject(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Subject[i].first >> Subject[i].second;
    }
    sort(Subject.begin(), Subject.end());

    priority_queue<int, vector<int>, greater<int>> Ftime; // 첫번째 인자: 저장될 데이터의 자료형 두번째 인자: 데이터를 저장할 내부 저장 공간(우선순위 큐는 큰 범위, 벡터는 작은 범위 저장소) 세번째 인자: 데이터를 내림차순 정렬
    // priority_queue<vector<int>, greater<int>> 안되는이유: 첫번째 인자가 벡터 형태이므로 숫자만 정렬하는 greater<int>로 벡터를 정렬 불가능함. 따라서 vector<int>를 정수형태로 바꾸거나 greater<int>를 빼야함  
    // 우선순위 큐에는 가장 우선순위가 낮은 원소를 반환하는 함수가 없음(우선순위 큐가 힙 구조를 기반으로 동작하므로)
    Ftime.push(Subject[0].second); // 여러 강의실들의 이전 강의 종료 시간을 저장하는 우선순위 큐(맨처음에 첫강의의 종료시간 넣기위해 0번째 인덱스 넣음)
    
    for (int i = 1; i < N; i++) // 0번 인덱스가 이미 강의실 1개에 들어간 상태이므로 다음 강의는 1번 인덱스로 시작해야 맞음(i = 0부터 시작하면 start가 0번 인덱스의 start가 돼서 강의실이 하나더 생기는 오류 발생)
    {
        int start = Subject[i].first;
        int end = Subject[i].second;

        if (Ftime.top() <= start) // 여러 강의실 중 가장 빨리 끝나는 강의의 종료 시간이 다음으로 비교할 강의의 시작시간보다 빨리 끝날때(즉 같은 강의실에 다음 강의를 널을 수 있을 때)
        {                         // 어차피 우선순위 큐의 원소가 몇개든 상관없이, top() 쓰면 항상 가장 빨리 끝나는 강의 시간이 나오게 됨
            Ftime.pop();
        }
        
        Ftime.push(end); // 기존 강의실이어도 다음 강의 종료시간 푸쉬해야하고, 새 강의실이어도 그 강의실에 들어갈 강의 종료 시간 푸쉬 해야함
    }
    cout << size(Ftime);
    return 0;
}