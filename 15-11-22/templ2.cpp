#include<iostream>
using namespace std;

template <class T>

void data(T u)
{
cout<<u*u<<endl;
}

int main(){
int x=10; float y=2.5;
data(x);
data(y);

return 0;
}
