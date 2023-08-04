#include<iostream>
using namespace std;

class A
{
public:
A(){
cout<<"I am in default constructor of  class A."<<endl;
}
~A(){
cout<<"I am in destructor of  class A."<<endl;
}

};
class B:public A
{
public:
B(){
cout<<"I am in default constructor of class B."<<endl;
}
~B(){
cout<<"I am in destructor of class B."<<endl;
}

};
class C:public B
{
public:
C()
{
cout<<"I am in default constructor of class C."<<endl;
}
~C()
{
cout<<"I am in destructor of class C."<<endl;
}
};
int main()
{
C p;

}
