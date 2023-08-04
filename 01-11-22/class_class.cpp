#include <iostream>
using namespace std;
class hours1;
class minutes1 // sourse class
{
    int m;

public:
    minutes1(int ms)
    {
        m = ms;
    }
    operator hours1()
    {
        hours1 h1;
        h1.h= m / 60;
        return (h1);
    }
    void show() { cout << m; }
    int getdata() { return m; }
};
class hours1
{
    int h;

public:
    hours1()
    {
        h = 0;
    }
    void show()
    {
        cout << h;
    }
};
int main()
{
    minutes1 min(60);
    hours1 hr;
    hr = min;
    min.show();
    hr.show();
}
