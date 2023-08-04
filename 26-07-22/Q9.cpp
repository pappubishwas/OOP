#include<iostream>
using namespace std;
int main()
{
    int a ,i ;
    cout<<"Enter one number:";
    cin>>a;
    if (a==2)
        cout<<"This is prime number";
    
    for(i=2;i<a;i++)
    {
        if(a%i==0){
        cout<<"This is not prime number.";
        break;
        }
        else if(i==a-1)
        cout<<"This is prime number";
    }
    return 0;
}