#include<iostream>
using namespace std;

class A
{
public:
int a;

};
class B:public A
{
public:
int b;
};
class C:public B
{
public:
int c;
void sum()
{
//int c;
c=a+b;
cout<<"The sum of a and b is : "<<c<<endl;
}
};
int main()
{
C p;
p.a=5;
p.b=9;
p.sum();

return 0;
}
