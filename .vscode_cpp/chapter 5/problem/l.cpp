#include <iostream>
#include <string>
using namespace std;

int main() {
    const int months = 12;
    const int years = 3;
    
    string TOTAL[years][months] = {
        {"2025-jan", "2025-feb", "2025-mar", "2025-apr", "2025-may", "2025-jun",
         "2025-jul", "2025-aug", "2025-sep", "2025-oct", "2025-nov", "2025-dec"}, // TOTAL[0]
        {"2026-jan", "2026-feb", "2026-mar", "2026-apr", "2026-may", "2026-jun",
         "2026-jul", "2026-aug", "2026-sep", "2026-oct", "2026-nov", "2026-dec"}, // TOTAL[1]
        {"2027-jan", "2027-feb", "2027-mar", "2027-apr", "2027-may", "2027-jun",
         "2027-jul", "2027-aug", "2027-sep", "2027-oct", "2027-nov", "2027-dec"}  // TOTAL[2]
    };

    int Y[years] = {0};  // 연도별 총 판매량 저장
    int num;  // 입력받을 책 판매량

    // 3년치 데이터 입력 받기
    for (int y = 0; y < years; y++) {  // 연도 반복
        for (int m = 0; m < months; m++) {  // 월 반복
            cout << TOTAL[y][m] << "의 책 판매량을 입력하시오: ";
            cin >> num;
            Y[y] += num;  // 연도별 판매량 누적
        }
    }

    // 연도별 총 판매량 출력
    for (int y = 0; y < years; y++) {
        cout << "연도 " << (2025 + y) << "년 총 판매량: " << Y[y] << "권" << endl;
    }

    return 0;
}
