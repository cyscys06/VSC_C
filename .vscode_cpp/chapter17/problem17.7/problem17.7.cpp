#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void ShowStr(const string & s); // 문자열 출력
void GetStrs(istream & is, vector<string> & vs); // 파일에서 문자열 추출

class Store // 문자열을 파일에 저장하는 함수 객체
{
private:
    ostream & os;
public:
    Store(ostream & o) : os(o) {}
    void operator()(const string &s) const 
    {
        size_t len = s.size(); // int보다 안정적인 size_t
        os.write((char*) &len, sizeof(size_t)); // len에서 size_t만큼의 크기를 파일에 출력
        os.write(s.data(), len); // 문자열 데이터 저장
    }
};

int main() 
{
    vector<string> vostr;
    string temp;

    cout << "문자열들을 입력하십시오(끝내려면 빈 줄 입력):\n"; // 문자열 입력
    while (getline(cin, temp) && temp[0] != '\0') // 빈줄 입력시 반복 종료 
    {
        vostr.push_back(temp); // 벡터 마지막 원소에 푸쉬백
    }

    cout << "\n다음과 같이 입력하셨습니다.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr); // 시작부터 끝까지 for문으로 반복 출력력

    ofstream fout("strings.dat", ios_base::out | ios_base::binary); // 2진 형식 출력용 파일
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary); // 파일에서 추출출
    if (fin.fail()) 
    {
        cerr << "입력을 위한 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }

    GetStrs(fin, vistr);
    cout << "\n파일로부터 읽은 문자열들은 다음과 같습니다:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const string & s)
{
    cout << s << endl;
}

void GetStrs(istream & is, vector<string> & vs)
{
    while (is) 
    {
        size_t len;
        is.read((char*) &len, sizeof(size_t));  // 길이 읽기
        if (is.fail()) 
        {
            break; // 읽기 실패 시 탈출
        }
        string temp(len, ' '); // 길이만큼 공간 확보
        is.read(&temp[0], len); // 문자열 내용 읽기
        vs.push_back(temp); // 벡터에 저장
    }
}