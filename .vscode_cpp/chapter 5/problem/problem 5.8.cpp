#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int s = 20;
    char voca[s];
    
    cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력) : " << endl;
    while (strcmp(voca, "done")) // strcmp(배열명, 문자열): 배열에 저장된 문자열이 함수에서 지정한 문자와 같으면 0을 출력(false)
    {
        cin >> voca;
        cout << " ";
    }
    cout << "종료" << endl;
    return 0;
}