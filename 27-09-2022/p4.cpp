


#include<iostream>
using namespace std;
class OOP
{
int x,y;
public:
OOP(){
}
OOP(int a,int b){
x=a;y=b;
}
void show(){
cout<<x<<" "<<y<<endl;
}
friend OOP operator +(OOP &,OOP &);
};
OOP operator +(OOP &d1,OOP &d2){
OOP d3;
d3.x=d1.x+d2.x;
d3.y=d1.y+d2.y;
return d3;
}
int main(){
OOP d1(2,4),d2(1,4),d3;
d3=d1+d2;
d3.show();
return 0;
}








