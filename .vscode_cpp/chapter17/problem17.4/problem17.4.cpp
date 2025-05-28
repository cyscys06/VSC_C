#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str1, str2;
    ifstream fin1("input1.txt");
    ifstream fin2("input2.txt");
    ofstream fout("output.txt");

    if (fin1.fail() || fin2.fail() || fout.fail())
    {
        cout << "파일 연결에 실패했습니다.";
        return 0;
    }

    while (true)
    {
        bool f1 = static_cast<bool>(getline(fin1, str1));
        bool f2 = static_cast<bool>(getline(fin2, str2));

        if (!f1 && !f2)
        {
            break;
        }    
        if (f1)
        {
            fout << str1 << " ";
        }
        if (f2)
        {
            fout << str2 << endl;
        }
    }

    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}
