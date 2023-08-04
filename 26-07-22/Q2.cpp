#include<iostream>
using namespace std;
int main()
{
    int a ,i ;
    cout<<"Enter one number:";
    cin>>a;
    // if (a%2==0)
    //     cout<<"The number is  even.";
    // else
    // cout<<"The number is odd.";    
    a % 2 == 0 ? cout <<a<<" is even." :  cout<<a<<" is odd.";

    return 0;
}