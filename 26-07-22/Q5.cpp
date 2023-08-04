#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a , b ,c,s,area;
    cout<<"Enter length of three sides of a triangle : ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle = "<<area;
    return 0;
}