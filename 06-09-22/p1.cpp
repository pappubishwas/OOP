#include<iostream>
using namespace std;

class A
{
public:
void p1(){
cout<<"I am in class A."<<endl;
}

};
class B:public A
{
public:
void p2(){
cout<<"I am in class B"<<endl;
}

};
class C:public B
{
public:
void p3()
{
cout<<"I am in class C"<<endl;
}
};
int main()
{
C p;
p.p1();
p.p2();
p.p3();

}
