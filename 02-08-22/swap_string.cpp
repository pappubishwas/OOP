#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2,temp;
    cout<<"Enter String String 1: ";
    getline(cin,str1);
    cout<<"Enter String String 2: ";
    getline(cin,str2);

    temp=str1;
    str1=str2;
    str2=temp;

    cout<<"After Swapping  Strings are: "<<endl;
    cout<<"String 1: "<<str1;
    cout<<endl<<"String 2: "<<str2;
    return 0;
}