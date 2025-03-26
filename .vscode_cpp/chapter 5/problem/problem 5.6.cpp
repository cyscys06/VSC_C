#include <iostream>
#include <string>
int main()
{
    using namespace std;
    
    const int months = 12, years = 3;
    string TOTAL[years][months];

    for (int i = 0; i < 3; i++)
    {
        cout << ""
        for ()
    }

    int num;
    int Y[years] = {0};// 입력받은 연,월별 책 판매량을 연도별로 나눠 서로 다른 인덱스에 저장
    for(int y = 0; y < years; y++)
    {
       for(int m = 0; m < months; m++)
       {
        cout << TOTAL[y][m] << "의 책 판매량을 입력하시오: ";
        cin >> num;
        Y[y] += num;
       }
    }

    cout << "2025년 총 판매량: " << Y[0] << "권" << endl;
    cout << "2026년 총 판매량: " << Y[1] << "권" << endl;
    cout << "2027년 총 판매량: " << Y[2] << "권" << endl;
    
    cout << "2년간 누적 판매량: " << Y[0] + Y[1] << "권" << endl;
    cout << "3년간 누적 판매량: " << Y[0] + Y[1] + Y[2] << "권" << endl;
    return 0;
}