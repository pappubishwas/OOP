#include<iostream>
using namespace std;
int main()
{
    int a , i,fact=1 ;
    cout<<"Enter one number:";
    cin>>a;
    for(i=a;i>0;i--)
        fact=fact*i;

    cout<<"Factorial of "<<a<<" is "<<fact;    
    return 0;
}