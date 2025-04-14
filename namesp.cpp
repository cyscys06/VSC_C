#include <iostream>
#include "namesp.h"

namespace SALES
{
    // 기본 생성자
    Sales::Sales()
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            sales[i] = 0.0;
        }
        average = 0.0;
        max = 0.0;
        min = 0.0;
    }
    
    // 배열 데이터로부터 초기화하는 생성자
    Sales::Sales(const double ar[], int n)
    {
        setSales(ar, n);
    }
    
    // 배열로부터 데이터를 가져와 Sales 객체에 설정하는 메서드
    void Sales::setSales(const double ar[], int n)
    {
        // 배열에서 데이터 복사 (n과 QUARTERS 중 작은 수만큼)
        int items = (n < QUARTERS) ? n : QUARTERS;
        
        // 판매액 데이터 복사
        for (int i = 0; i < items; i++)
        {
            sales[i] = ar[i];
        }
        
        // 남은 항목들을 0으로 초기화
        for (int i = items; i < QUARTERS; i++)
        {
            sales[i] = 0.0;
        }
        
        // 통계 계산
        // 평균
        double sum = 0.0;
        for (int i = 0; i < items; i++)
        {
            sum += sales[i];
        }
        average = (items > 0) ? sum / items : 0.0;
        
        // 최댓값과 최솟값
        if (items > 0)
        {
            // 최댓값 찾기
            max = sales[0];
            for (int i = 1; i < items; i++)
            {
                if (sales[i] > max)
                    max = sales[i];
            }
            
            // 최솟값 찾기
            min = sales[0];
            for (int i = 1; i < items; i++)
            {
                if (sales[i] < min)
                    min = sales[i];
            }
        }
        else
        {
            max = 0.0;
            min = 0.0;
        }
    }
    
    // 대화식 버전: 사용자로부터 데이터를 입력받아 설정하는 메서드
    void Sales::setSales()
    {
        std::cout << "4분기 판매액 정보를 입력하세요:\n";
        double temp[QUARTERS];
        
        // 사용자로부터 각 분기 판매액 입력 받기
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << i + 1 << "분기 판매액: ";
            while (!(std::cin >> temp[i]))
            {
                std::cin.clear();
                while (std::cin.get() != '\n')
                    continue;
                std::cout << "숫자를 입력하세요: ";
            }
        }
        
        // 입력 버퍼 정리
        std::cin.get();
        
        // setSales 메서드를 활용하여 데이터 설정
        setSales(temp, QUARTERS);
    }
    
    // 모든 정보 출력 메서드
    void Sales::showSales() const
    {
        std::cout << "판매액 정보:\n";
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << i + 1 << "분기: " << sales[i] << std::endl;
        }
        
        std::cout << "평균 판매액: " << average << std::endl;
        std::cout << "최대 판매액: " << max << std::endl;
        std::cout << "최소 판매액: " << min << std::endl;
    }
}