#include <iostream>
using namespace std;

double add(double x, double y); // x + y
double subtract(double x, double y); // x - y
double multiply(double x, double y); // x * y
double divide(double x, double y); // x / y (단, y는 0이 아니다)
double calculate(double a, double b, double (*operation)(double, double)); // 임의의 실수 2개를 입력받고, 
                                                                           // 그 2개의 실수에 대해 사칙연산을 진행할 함수 1개도 매개변수로 가지는 계산 함수
int main() 
{
    double (*operations[])(double, double) = { add, subtract, multiply, divide}; // *operations[]: 4개의 함수를 지시하는 포인터형 배열
    const char* operationNames[] = { "덧셈", "뺄셈", "곱셈" }; // 사용자의 선택지에 따른 인덱스를 가지는 배열 ([0]: 덧셈함수, [1]: 뺄셈함수, [2]: 곱셈함수)
    double num1, num2;
    int choice; // 선택지(선택지는 양의 정수)

    while (true) {
        cout << "두 개의 실수를 입력하세요 (수가 아닌 문자 입력 시 종료): ";
        if (!(cin >> num1 >> num2)) // 수가 아닌 문자 입력할떄
        {
            break;
        }
        cout << "수행할 연산을 선택하세요:\n";
        cout << "1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈\n";
        cout << "선택 (1~4): ";
        
        while(!(cin >> choice)) // 이상한 입력 받음
        {
            if (choice < 1 || choice > 4) // 1보다 작거나 4보다 큰 수 입력할때
            {
                cout << "잘못된 입력입니다. 다시 시도하세요.\n";
                continue;
            }
        }
        double result = calculate(num1, num2, operations[choice - 1]);
        cout << operationNames[choice - 1] << " 결과: " << result << endl;
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}

double add(double x, double y) 
{
    return x + y;
}

double subtract(double x, double y) 
{
    return x - y;
}

double multiply(double x, double y) 
{
    return x * y;
}

double divide(double x, double y) 
{
    return x / y;
}

double calculate(double a, double b, double (*operation)(double, double)) 
{
    return operation(a, b);
}

