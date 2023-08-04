#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun() = 0;
};

class B : public A
{
};

int main()
{
    B p;
    return 0;
}
