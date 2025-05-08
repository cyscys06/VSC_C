// 벡터 활용
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL}; // RECT, POL 각각의 버전
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        
        double xval() const // x 설정
        {
            return x;
        }
        double yval() const // y 설정
        {
            return y;
        }
        double magval() const // 벡터크기 설정
        {
            return mag;
        }
        double angval() const // 각도 설정(라디안을 각도로 변환: c++에서 기본적으로 라디안이 쓰이므로 이를 각도로 변환)
        {
            return ang;
        }
        void polar_mode();
        void rect_mode();
        // 연산자 오버로딩 함수들
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        // 프렌드 함수
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    
    private:
        double x, y, mag, ang; // 각각 수평, 수직, 벡터 길이, 벡터 방향(각도로 표시되는)
        Mode mode; // RECT 또는 POL중 하나 고르는 선택지
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    };
}

#endif