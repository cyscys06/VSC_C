#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    Account myAccount; // Ŭ���� ��ü ����(����ü�� ����)
    double deposit; // �Աݾ�
    double withdraw; // ��ݾ�
    int option; // ������
    
    cout << "���� ����� ���α׷�. ���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�.\n"
            "1) ���� ���      2) �Ա�\n"
            "3) ���           q) ���α׷� ����\n";
    
    while (cin >> option) 
    {
        switch(option)
            {
	              case 1: myAccount.output(); // Ŭ������ ����Լ�
                        continue;
	            
                case 2: cout << "�Ա� �׼��� �Է��Ͻÿ�: \n";
                          cin >> deposit;
                          while (deposit < 0)
                          {
                            cout << "������ �Է��� �� �����ϴ�. �ٽ� �Է��Ͻʽÿ�.\n";
                          }
                          myAccount.ipgeum(deposit);
                          cout << deposit << "���� �ԱݵǾ����ϴ�.\n";
                          continue;
	            
                case 3: cout << "��� �׼��� �Է��Ͻÿ�: \n";
                          cin >> withdraw;
                          while (withdraw < 0)
                          {
                            cout << "������ �Է��� �� �����ϴ�. �ٽ� �Է��Ͻʽÿ�.\n";
                          }
                          myAccount.choolgeum(withdraw);
                          cout << withdraw << "���� ��ݵǾ����ϴ�.\n";
                          continue;
                
                default : cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�.\n"
                "a) ���� ���      b) �Ա�\n"
                "c) ���           q) ���α׷� ����\n";
                continue;
            }
    }
    cout << "���α׷��� �����մϴ�.\n";
    return 0;
}