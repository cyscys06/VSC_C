#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    bool flag;
    vector<int> N(n);

    for (int i = 0; i < n; i++)
    {
        flag = true;
        cin >> N[i];
        
        if (N[i] == 1)
        {
            flag = false;
        }
        for (int j = 2; j * j <= N[i]; j++)
        {
            if (N[i] % j == 0) // 소수면 나머지 0 안나오고 합성수면 최소한번 0 나오므로
            {
                flag = false;
            }
        }

        if (flag)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}