#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account 
{    
private:
    string name;
    string num;
    long zan;
public:
    Account();
    void output();
    long ipgeum();
    long choolgeum();
}
#endif