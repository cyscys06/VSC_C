#include <iostream>

using namespace std;

// 연산 함수들
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

// calculate 함수
double calculate(double a, double b, double (*operation)(double, double)) {
    return operation(a, b);
}

int main() {
    // 함수 포인터 배열
    double (*operations[])(double, double) = { add, subtract, multiply };
    const char* operationNames[] = { "덧셈", "뺄셈", "곱셈" };

    double num1, num2;
    int choice;

    while (true) {
        // 사용자 입력
        cout << "두 개의 실수를 입력하세요 (종료: 0 0): ";
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0) break;

        // 연산 선택
        cout << "수행할 연산을 선택하세요:\n";
        cout << "1. 덧셈\n2. 뺄셈\n3. 곱셈\n";
        cout << "선택 (1~3): ";
        cin >> choice;

        if (choice < 1 || choice > 3) {
            cout << "잘못된 입력입니다. 다시 시도하세요.\n";
            continue;
        }

        // 선택한 연산 수행
        double result = calculate(num1, num2, operations[choice - 1]);
        cout << operationNames[choice - 1] << " 결과: " << result << endl;
    }

    cout << "프로그램을 종료합니다.\n";
    return 0;
}