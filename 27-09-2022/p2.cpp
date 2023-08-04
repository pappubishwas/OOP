#include<iostream>
using namespace std;
class member
{
int a,b;
public:
member(){

}
member(int ,int);
void show(){
cout<<a<<" "<<b<<endl;
}
member operator +(member D)
{
member T;
T.a=a+D.a;
T.b=b+D.b;
return T;
}
};
member :: member (int x,int y){
a=x;
b=y;
}
int main()
{
member A(4,5),B(2,5),C;
A.show();
B.show();
C=A+B;
C.show();
return 0;
}
