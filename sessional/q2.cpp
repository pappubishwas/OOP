#include<iostream>
using namespace std;

class Shape{
    public:
    double b,h;
    void get_data(double x, double y){
        b=x;h=y;
    }
    virtual void display_area(){

    }
};
class Triangle:public Shape
{
    public:
    void display_area(){
        cout<<"Area of Triangle: "<<(b*h)/2<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    void display_area(){
        cout<<"Area of Rectangle: "<<(b*h)<<endl;
    }
};
int main(){
    Triangle t;
    Rectangle r;
    t.get_data(3,6);
    r.get_data(4,6);
    t.display_area(); 
    r.display_area();
    return 0;
}
