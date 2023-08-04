#include<iostream>
#include<string>
using namespace std;

class statf
{
static int c;
int n;
string name;
public:
void getdata()
{
    //fflush(stdin);
    cout<<"Enter your name:";
    // fflush(stdin);
    cin>>name;
    fflush(stdin);
    cout<<"Enter you roll: ";
    cin>>n;
    c++;
}
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll : "<<n<<endl;
}
static void showcount(){
    cout<<"Total number of object : "<<c<<endl;
}
};
int statf::c;
int main()
{
    // string pap;
    // cin>>pap;
    statf t1,t2,t3;
    t1.getdata();
    t2.getdata();
    statf::showcount();
    cout<<endl;
    t3.getdata();
    t1.display();
    t2.display();
    t3.display();
    statf::showcount();    
}