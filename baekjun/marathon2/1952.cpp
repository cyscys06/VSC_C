#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::vector;












// #include <bits/stdc++.h>
// using std::cout;
// using std::cin;
// using std::vector;

// int main()
// {
//     int m, n; // 세로, 가로
//     cin >> m >> n;

//     vector<vector<bool>> S(m, vector<bool>(n, false));

//     int i = 0, j = 0, count = 0; // 세로에 대한 이터레이터, 가로에 대한 이터레이터, 꺾은 횟수
//     bool flag = true;

//     while (flag)
//     {
//         flag = false; // 전수조사에서 전부 방문한거면 false 그대로여서 while문 종료
//         for (int a = 0; a < m; a++)
//         {
//             for (int b = 0; b < n; b++)
//             {
//                 if (S[a][b] == false) // 하나라도 false인게 있으면
//                 {
//                     flag = true;
//                     break;
//                 }
//             }

//             if (!flag)
//             {
//                 break;
//             }
//         }

//         while (true) // 1번째 이동
//         {
//             S[i][j] = true;
//             if (S[i][j + 1] == true || j == n - 1)
//             {
//                 count++;
//                 break;
//             }
            
//             j++;
//         }

//         while (true) // 2번째 이동
//         {
//             S[i][j] = true;
//             if (S[i + 1][j] == true || i == m - 1)
//             {
//                 count++;
//                 break;
//             }
            
//             i++;
//         }

//         while (true) // 3번째 이동
//         {
//             S[i][j] = true;
//             if (S[i][j - 1] == true || j == 0)
//             {
//                 count++;
//                 break;
//             }
            
//             j--;
//         }

//         while (true) // 4번째 이동
//         {
//             S[i][j] = true;
//             if (S[i - 1][j] == true || i == 0)
//             {
//                 count++;
//                 break;
//             }
            
            
//             i--;
//         }
//     }

//     cout << count;

//     return 0;
// }