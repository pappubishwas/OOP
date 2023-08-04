#include<iostream>
using namespace std;
class tst
{
public:
tst(){cout<<"This a constructor.\n";}
~tst(){cout<<"This is a destructor.\n";}
};
int main()
{
try
{
tst t;
throw 10;
}
catch(int j)
{
cout<< "Exception caught :"<<j<<endl;
}
}
