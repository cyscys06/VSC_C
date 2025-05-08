#include <cmath>
#include "vect.h"
using namespace std;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0); // 라디안 값을 각도 크기로 바꿔줌
                                                // atan(x); 인수 x의 역탄젠트 값을 반환(범위: -π/2 ~ π/2)
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y); // 피타고라스 공식
    }
    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0) // 벡터 (0,0)이면
            {
                ang = 0.0; // 각도도 0도
            }
        else // (0,0)아니면
            {
                ang = atan2(y, x); // atan2(y, x); 두 인수 y, x에 대해 y/x의 역탄젠트 값을 반환(범위: -π/2 ~ π/2)
            }
    }
    void Vector::set_x()
    {
        x = mag * cos(ang); // 벡터크기 * 각도의 코사인값
    }
    void Vector::set_y()
    {
        y = mag * sin(ang); // 벡터크기 * 각도의 사인값
    }

    Vector::Vector()
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT) // RECT 형식이면
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "잘못된 매개변수입니다.\n";
            cout << "벡터를 0으로 설정합니다.\n";
            x = y = mag = ang = 0.0;
            mode = RECT; 
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
            {
                x = n1;
                y = n2;
                set_mag();
                set_ang();
            }
            else if (form == POL)
            {
                mag = n1;
                ang = n2 / Rad_to_deg;
                set_x()
                set_y();
            }
            else 
            {
                cout << "잘못된 매개변수입니다.\n";
                cout << "벡터를 0으로 설정합니다.\n";
                x = y = mag = ang = 0.0;
                mode = RECT; 
            }
    }
    
    Vector::~Vector(){}

    void Vector::polar_mode() // 모드 POL로 바꿈
    {
        mode = POL;
    }

    void Vector::rect_mode() // 모드 RECT로 바꿈
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
}

