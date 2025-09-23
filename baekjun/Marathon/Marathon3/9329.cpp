#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::vector;

int main()
{
    int T;
    cin >> T;

    int n, m, k, s, totalmoney = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> m;
        
        vector<int> nums(m);
        vector<vector<int>> sticker(n);
        vector<int> money(n);

        for (int a = 0; a < n; a++)
        {
            cin >> k;
            
            for (int b = 0; b < k; b++)
            {
                cin >> s;
                sticker[a].push_back(s);
            }

            cin >> money[n];
        }

        for (int c = 0; c < m; c++)
        {
            cin >> nums[c];
        }

        

    }
}