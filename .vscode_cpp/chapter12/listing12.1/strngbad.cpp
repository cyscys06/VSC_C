#include <cstring>
#include "strngbad.h"
using std::cout;

int StringBad::num_strings = 0; // �ʱ�ȭ

StringBad::StringBad(const char * s)
{
    len = std::strlen(s); 
    str = new char[len + 1]; // ���ڿ� ���� + 1(�ι��ڶ���)��ŭ�� ũ�⸦ new�����ڸ� ���� ���� �� �̸� str�� ����
    std::strcpy(str, s); // �ƹ��͵� ���� ������ ���� str�� ����ڷκ��� �Է¹��� s�� �Ҵ���
    num_strings++;
    cout << num_strings << ": \"" << str << "\" ��ü ����\n";
}

StringBad::StringBad() // ��ü���� ����Ʈ�� �����ִ� ����
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++"); 
    num_strings++;
    cout << num_strings << ": \"" << str << "\" ����Ʈ ��ü ����\n";
}

StringBad::~StringBad() // �ı��ڸ� �����Ҷ� ��µǴ� �͵�(�ϳ��� ��ü(����� ������)���� ���� �ı��ڰ� �ϳ��� �Ҵ��)
{
    cout << "\"" << str << "\" ��ü �ı�, ";
    --num_strings;
    cout << "���� ��ü ��: " << num_strings << "\n";
    delete [] str; // �����޸� ����
} 

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}