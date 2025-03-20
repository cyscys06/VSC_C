#include <iostream>
using namespace std;
int main()
{
    int degree, minute, second;
    cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
    cout << "먼저, 도각을 입력하시오:" << endl;
    cin >> degree;
    cout << "다음에, 분각을 입력하시오:" << endl; 
    cin >> minute;
    cout << "끝으로, 초각을  입력하시오:" << endl;
    cin >> second;

    const double weedo1 = degree;
    const double weedo2 = minute / 60;
    const double weedo3 = second / 3600;
    const double weedo = weedo1 + weedo2 + weedo3;
    cout << weedo1 << "도, " << weedo2 << "분, " << weedo3 << "초 = " << weedo << "도" << endl; 
}