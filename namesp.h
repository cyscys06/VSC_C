// namesp.h -- Sales 클래스와 메서드 선언을 위한 헤더 파일
#ifndef NAMESP_H_
#define NAMESP_H_

namespace SALES
{
    const int QUARTERS = 4;
    
    class Sales {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
        
    public:
        // 기본 생성자
        Sales();
        
        // 배열 데이터로부터 초기화하는 생성자
        Sales(const double ar[], int n);
        
        // 배열로부터 데이터를 가져와 Sales 객체에 설정하는 메서드
        void setSales(const double ar[], int n);
        
        // 사용자로부터 데이터를 입력받아 설정하는 메서드
        void setSales();
        
        // 모든 정보 출력 메서드
        void showSales() const;
    };
}

#endif