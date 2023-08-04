#include <iostream>
using namespace std;

template <class T>

class data

{

    T x;

public:
    data(T u)

    {

        x = u;
    }

    void show(T y)

    {

        cout << x << "  " << y << endl;
    }
};

int main()

{

    data<char> c('B');

    data<int> i(100);

    data<double> d(48.25);

    c.show('A');

    i.show(100);

    d.show(68.25);

    return 0;
}
