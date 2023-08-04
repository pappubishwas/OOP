#include<iostream>
using namespace std;
class item
{
static int count;
int number;
public:
void getdata(int a){
    number=a;
    count++;
}
void getcount(){
    cout<<"The value of count is :"<<count<<endl;
}
};
int item::count;
int main()
{
item a,b,c;
a.getcount();
b.getcount();
c.getcount();

a.getdata(200);
b.getdata(300);
b.getcount();
c.getdata(400);
c.getcount();
cout<<"After reading"<<endl;
a.getcount();
b.getcount();
c.getcount();

}