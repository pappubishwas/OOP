#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    char s;
    int count = 0,i;
    cout<<"Enter a string : \n";
    getline(cin,str);
    cout<<"Enter a character to find its frequency: "<<endl;
    cin>>s;
    for (i = 0; str[i] != '\0'; ++i) {
    if (s == str[i])
        ++count;
    }
    cout<<"\nFrequency of "<<s << " is : "<< count;
    return 0;
}