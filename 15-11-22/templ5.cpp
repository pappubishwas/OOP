#include <iostream>
using namespace std;

template <class T1,class T2>

class data
{

public:
void show(T1 a,T2 b)
{

cout<<a<<"  "<<b<<endl;

}

}; 

int main()
{

int i[]={1,3,4};
float j[]={1.5,2.7,3.5};
data<int, float> h;
for(int m=0;m<3;m++){
h.show(i[m],j[m]);
}
return 0;

}
