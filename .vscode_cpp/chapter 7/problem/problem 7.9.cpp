#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "학급의 학생 수를 입력하십시오: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
    {
        continue;
    }
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다.\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    
}

void display1(student st)
{

}

void display2(const student * ps)
{

}

void display3(const student pa[], int n)
{

}