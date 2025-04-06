#include <iostream>
#include <cstring>  // strlen 사용
using namespace std;

// 일반 템플릿 함수: T형 배열에서 최댓값 반환
template <typename T>
T maxn(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// 특수화된 템플릿 함수: char* 배열에서 가장 긴 문자열의 주소 반환
template <>
const char* maxn(const char* arr[], int n) {
    const char* longest = arr[0];
    for (int i = 1; i < n; i++) {
        if (strlen(arr[i]) > strlen(longest)) {
            longest = arr[i];
        }
    }
    return longest;
}

int main() {
    // int 배열 테스트
    int intArr[6] = {2, 8, 5, 1, 10, 3};
    cout << "int 배열 최댓값: " << maxn(intArr, 6) << endl;

    // double 배열 테스트
    double doubleArr[4] = {2.5, 9.3, 4.4, 7.1};
    cout << "double 배열 최댓값: " << maxn(doubleArr, 4) << endl;

    // 문자열 배열 테스트
    const char* strings[5] = {
        "apple",
        "strawberry",
        "banana",
        "grape",
        "watermelon"
    };

    const char* longestStr = maxn(strings, 5);
    cout << "가장 긴 문자열: " << longestStr << endl;

    return 0;
}
