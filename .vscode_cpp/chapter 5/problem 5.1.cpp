#include <iostream>
int main()
{
    using namespace std;
    cout << "첫 번째 정수를 입력하시오: ";
    int FI; // First Integer
    cin >> FI;
    cout << "두 번째 정수를 입력하시오: ";
    int SI; // Second Integer
    cin >> SI;

    int gaesoo = SI - FI - 1;
    int num1, num2, num3;
    for (num1 = 0; num1 < gaesoo; num1++)
        num2 = FI + num1;
        num3 = num2 + num1;
    int total = num3;
    cout << "첫 번째, 두 번째 정수를 포함해 그 사이에 있는 모든 정수들의 합: " << num3 << endl;
    return 0;
}