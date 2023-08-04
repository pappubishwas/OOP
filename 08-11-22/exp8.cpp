#include<iostream>
using namespace std;
class tst
{
public:
tst(){cout<<"This a constructor.\n";}
~tst(){cout<<"This is a destructor.\n";}
};
class tst1
{
public:
tst1(){cout<<"This a constructor1.\n";
throw 20;}
~tst1(){cout<<"This is a destructor1.\n";}
};
int main()
{
try
{
tst t;
tst1 t1;
tst t2;
}
catch(int j)
{
cout<< "Exception caught :"<<j<<endl;
}
}
