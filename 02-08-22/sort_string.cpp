#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char ch;
    int i, j, len;
    cout<<"Enter the String: ";
    getline(cin,str);
    len = str.length();
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout<<"\nString in Alphabetic Order: "<<str;
    cout<<endl;
    return 0;
}