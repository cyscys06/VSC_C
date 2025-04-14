#ifndef GOLF_H_
#define GOLF_H_
#include <iostream>
const int len = 40;

class golf 
{
private:
    char fullname[len];
    int handicap;
    
public:
    golf(); // 디폴트 생성자
    golf(const char* name, int hc); // 사용자 정의 생성자
    bool setgolf();
    void sethandicap(int hc);
    void showgolf() const;
};
#endif