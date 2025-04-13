#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    double deposit;
    double withdraw; 
    char option;
    cout << "계좌 입출금 프로그램. 다음 선택 사항 중에서 하나를 선택하십시오.\n"
            "a) 정보 출력      b) 입금\n"
            "c) 출금           q) 프로그램 종료\n";
    while (cin >> option) 
    {
        switch(option)
            {
	            case 'a': output(void);
                          continue;
	            
                case 'b': cout << "입금 액수를 입력하시오: \n";
                          cin >> deposit;
                          while (deposit < 0)
                          {
                            cout << "음수는 입력할 수 없습니다. 다시 입력하십시오.\n";
                          }
                          ipgeum(deposit);
                          cout << deposit << "원이 입력되었습니다.\n";
                          continue;
	            
                case 'c': cout << "출금 액수를 입력하시오: \n";
                          cin >> withdraw;
                          while (withdraw < 0)
                          {
                            cout << "음수는 입력할 수 없습니다. 다시 입력하십시오.\n";
                          }
                          choolgeum(withdraw);
                          cout << withdraw << "원이 출금되었습니다.\n";
                          continue;
                
                case 'q': cout << "프로그램을 종료합니다.\n";
                          break;
                
                default : cout << "다음 선택 사항 중에서 하나를 선택하십시오.\n"
                "a) 정보 출력      b) 입금\n"
                "c) 출금           q) 프로그램 종료\n";
                continue;
            }
    }
    return 0;
}