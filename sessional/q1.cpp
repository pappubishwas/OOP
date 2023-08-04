#include<iostream>
using namespace std;

class Employee
{
    public:
    string p;
    int id;
    float salary;
    void getdata(){
        cout<<"Enter your name:";
        cin>>p;
        cout<<"Enter your id:";
        cin>>id;
        cout<<"Enter your salary:";
        cin>>salary;

    }
};
class Part_time;
class Regular:public Employee{
    
    public:
    float da,hra;
    //float s=salary;
    void da_hra(){
        da=salary*0.05;
        hra=salary*0.07;
        cout<<da<<hra<<endl;
    }
    friend void claculate(Regular x,Part_time y);
};
class Part_time: public Employee{
    float h,h_pay,total;
    public:
    Part_time(float x,float y){
        h=x;h_pay=y;
        total=h*h_pay;
    }
    friend void claculate(Regular x,Part_time y);    
};

void claculate(Regular x,Part_time y){
        float total_salary;
        total_salary=x.salary+x.da+x.hra+y.total;
        cout<<"Total income: "<<total_salary<<endl;
}

int  main(){
    Regular p;
    p.getdata();
    p.da_hra();
    Part_time t(20,1000);
    claculate(p,t);
    

}