#include<iostream>
using namespace std;
class car
{
int car_number;
char car_model[10];
public:
void get_data();
void show_data();
};
void car::get_data()
{
    cout<<"Enter the car number : ";
    cin>>car_number;
    cout<<"Enter the car model: ";
    cin>>car_model;
}
void car::show_data(){
    cout<<"The car number is "<<car_number<<endl;
    cout<<"The car model is "<<car_model<<endl;
}
int main()
{
car c1,c2;
c1.get_data();
c2.get_data();
c1.show_data();
c2.show_data();
}