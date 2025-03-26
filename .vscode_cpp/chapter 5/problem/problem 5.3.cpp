#include <iostream>
int main()
{
    using namespace std;
    cout << "수를 입력하시오(0을 출력하면 종료): ";
    int num;
    cin >> num;

    int total = 0;
    while (num != 0) // for: 사용횟수가 정해질때 
                                   // while: 사용횟수가 정해져 있지 않을때 
                                   // -> 특정조건 만족할때까지 계속 반복(true), 만족하면 반복 종료(false)
    {
        total += num;
        cout << "입력된 수들의 누계: " << total << endl;
        cout << "수를 입력하시오(0을 입력하면 종료): ";
        cin >> num;
    }
    cout << "프로그램이 종료되었습니다." << endl;
    return 0;
}