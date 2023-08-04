#include<iostream>
using namespace std;
template <class T>
class data
{
public:
data(T u)
{
cout<<u<<endl;
}
};

int main(){
data < int > h(10);

return 0;
}
