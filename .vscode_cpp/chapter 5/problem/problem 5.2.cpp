#include <iostream>
#include <array>
using namespace std;

int main() {
    const int ArSize = 101;  // 0~100: 101개
    array<long double, ArSize> factorials; // array 객체를 통해 크기 ArSize이고 자료형 long double인 
                                           // 배열 팩토리얼 초기화 

    factorials[0] = 1.0L; 
    factorials[1] = 1.0L;  

    for (int i = 2; i <= 100; i++) 
        factorials[i] = i * factorials[i - 1];
    
    cout << "100! = " << factorials[100] << endl;
    return 0;
}
