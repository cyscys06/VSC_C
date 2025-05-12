#include <iostream>
#include "stack1.h"
using namespace std;

Stack::Stack(int n = MAX)
{
    pitems = new char[1];
    top = 0;
}
    
Stack::Stack(const Stack & st)
{
    
}
    
bool Stack::isempty() const
{
    return top == 0;
}
    
bool Stack::isfull() const
{
    return top == MAX;
}
    
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}
    
bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else    
        return false;
}
    
Stack & Stack::operator=(const Stack & st)
{
    delete [] pitems;
    size = strlen(st);
    pitems = new char[MAX];
    strcpy(pitems, st);

    return *this;
}