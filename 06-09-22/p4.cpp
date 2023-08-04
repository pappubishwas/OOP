#include<iostream>
using namespace std;
class A{

protected:
int a;


};
class B: public A{
public:
void input(){
cout<<"Enter a value :";
cin>>a;
}
void output()
{
cout<<"The value of  a = "<<a<<endl;
}
};
int main()
{
B p;
p.input();
p.output();
}
