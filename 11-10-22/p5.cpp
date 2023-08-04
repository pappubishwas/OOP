#include<iostream>
using namespace std;
 class distance1
 {
 float km,mt;
 
 public:
 distance1(float a,float b){
 km=a;mt=b;
 }
 distance1(){
 }
void display(){
cout<<"Addition of two distance : Kilometer :"<<km<<"  ,meter :" <<mt<<endl;
}
distance1 operator +(distance1 d1){
distance1 d;
d.km=km+d1.km;
d.mt=mt+d1.mt; 
if(d.mt>=1000){
d.km++;
d.mt=d.mt-1000;
}
return d;
} 
};
int main()
{
distance1 a(2,800),b(5,600),c;
c=a+b;
c.display();
return 0;
}
