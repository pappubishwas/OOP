#include<iostream>
using namespace std;
int main(){
    int i,num,r,rev=0;
    cout<<"Enter the 3 digit integer:";
    cin>>num;
    for(i=1;i<=3;i++)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10; 
    }
    cout<<"The reverse number is: "<<rev;
    
}