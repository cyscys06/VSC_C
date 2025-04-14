// usenamesp.cpp -- SALES 네임스페이스와 Sales 클래스를 사용하는 메인 프로그램
#include <iostream>
#include "namesp.h"

int main()
{
    using namespace std;
    
    // 첫 번째 Sales 객체 (생성자와 배열 데이터 활용)
    double data[6] = {12450.5, 20000.0, 32500.75, 25150.25, 10000.0, 18500.5};
    SALES::Sales first(data, 6);  // 생성자를 통한 초기화 (6개 항목 중 처음 4개만 사용됨)
    
    cout << "첫 번째 판매 데이터 (배열 활용):\n";
    first.showSales();
    
    cout << "\n----------------------------------------\n\n";
    
    // 두 번째 Sales 객체 (기본 생성자 및 setSales 메서드 활용)
    SALES::Sales second;  // 기본 생성자 호출
    
    cout << "두 번째 판매 데이터 (사용자 입력):\n";
    second.setSales();  // 사용자 입력으로 데이터 설정
    second.showSales();
    
    return 0;
}