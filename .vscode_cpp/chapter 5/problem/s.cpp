#include <iostream>
int main()
{

    using namespace std;
const int y = 3;
const int m = 12;
int y_arr[y][m];

for (int i = 0; i < y; i++) { 
    for (int j = 0; i < m; i++) 
        cin >> y_arr[i][j];
    }


int a = 0;
for (int i = 0; i < y; i++) {
    int t = 0;
    for (int j = 0; j < m; j++) {
        t += y_arr[i][j];
    }
    a += t;
    cout << i + 1 << "년째 판매량" << t << endl;
    cout << i + 1 << "년째까지의 누적 판매량" << a << endl;
}

}
