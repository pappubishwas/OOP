#include<iostream>
using namespace std;

class account
{
public:
float salary;

};
class programer:public account
{
public:
float bonus;

};

int main()
{
programer p;
p.salary=9000;
p.bonus=3000;
cout<<"The salary of the programer is :"<<p.salary<<endl;
cout<<"The bonus of the programer is :"<<p.bonus<<endl;
cout<<"The total income of the programer is: "<<(p.salary + p.bonus)<<endl;
return 0;
}
