#include<iostream>
using namespace std;
class complex
{
float real ,img;

public:

void accept(){
printf("Enter a real part of complex number :");
cin>>real;
printf("Enter a imaginary part of a complex number : ");
cin>>img;
}

void display(){
cout<<real<<" + ("<<img<<")i"<<endl;
}

friend complex operator +(complex c1,complex c2);
};



complex operator +(complex c1,complex c2){

complex c;
c.real=c1.real + c2.real;
c.img=c1.img+c2.img;
return (c);
}

int main(){
complex img1,img2,sum;
img1.accept();
img2.accept();
printf("The first  imaginary number is : ");
img1.display();
printf("The second imaginary number is : ");
img2.display();

sum=img1+img2;
printf("Addition of two imaginary number is : ");
sum.display();
}
