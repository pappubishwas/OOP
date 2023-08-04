#include <iostream>
using namespace std;

template <class T1,class T2>

class data
{

public:
data(T1 a,T2 b)
{

cout<<a<<"  "<<b<<endl;

}

};

int main()
{

data <int, float> h(2,2.5);

data <int, char> i(15,'c');

data < float, int > j(3.12,50);

return 0;
}
