#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using namespace std;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char * s);
    String();
    String(const String & st);
    ~String();
    int length() const { return len; }
    
    // 연산자 오버로딩
    String & operator=(const String & st);
    String & operator=(const char * s);
    char & operator[](int i);

}