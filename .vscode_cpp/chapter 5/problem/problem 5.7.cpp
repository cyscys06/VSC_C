#include <iostream>
#include <string>
int main()
{
    using namespace std;
    struct car
    {
        string company;
        int year;
    };
    int num;
    cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
    cin >> num;
    cin.get();

    car * cars = new car[num];

    for(int i = 0; i < num; i++)
    {
        cout << "�ڵ��� #" << i + 1 << ":" << endl;
        cout << "���۾�ü: ";
        getline(cin, cars[i].company);
        cout << "���۳⵵: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�: " << endl;
    
    for (int i = 0; i < num; i++)
    cout << cars[i].year << "���� " << cars[i].company << endl;
    
    delete[] cars;
}