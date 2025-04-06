#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 50;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy & by, char tt)
{
    stringy * beanys = new stringy;

}

void show(char tt)
{

}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D', testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}