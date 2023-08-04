#include<iostream>
using namespace std;
class space{
int x,y,z;
public:
void getdata(int a, int b, int c);
void display();
void operator ++();
};
void space::getdata(int a,int b, int c){
x=a;y=b;z=c;
}

void space::display(){
cout<<x<<" "<<y<<" "<<z<<endl;
}
void space::operator ++(){
x=++x;
y=++y;
z=++z;
}

int main()
{
space t;
t.getdata(2,5,8);
t.display();
++t;
t.display();
return 0;
}
