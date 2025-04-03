#include <iostream>
#include <string>


const int Seasons = 4;

const char* Snames[Seasons] =
{ "Spring", "Summer", "Fall", "Winter" };

// array 객체를 수정하는 기능
void fill(double pa[]);
// 수정하지 않고 객체를 사용하는 기능
void show(double da[]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double pa[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << "에 소요되는 비용:";
        cin >> pa[i];
    }
}

void show(double da[])
{
    using namespace std;
    double total = 0.0;
    cout << "\n계절별비용\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "총 비용 : $" << total << endl;
}