#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
T max5(T arr[5]) {
    T max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArr[5] = {3, 7, 2, 9, 5};
    double doubleArr[5] = {2.3, 7.1, 4.8, 9.9, 6.6};

    cout << "int 배열의 최댓값: " << max5(intArr) << endl;
    cout << "double 배열의 최댓값: " << max5(doubleArr) << endl;

    return 0;
}
