#include <bits/stdc++.h>
using namespace std;

class Node 
{
    int key; // 노드 자기자신
    Node* left; // 왼쪽 자식노드(부모처럼 노드의 형태)
    Node* right; // 오른쪽 자식노드(부모처럼 노드의 형태)

    Node(int value)
    {
        key = value;
        left = right = nullptr; // 기본값
    }
};

int main()
{
    int num; //노드개수
    cin >> num;
}