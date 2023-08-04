#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"Before swap value of a : "<<a<<"\n Before swap value of b : "<<b<<endl;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swap, value of a : "<<a<<"\n After swap, value of b : "<<b;
    return 0;
}