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

void operator -();
};



void complex::operator -(){
real=-real; img=-img;
}

int main(){
complex img1;
img1.accept();
printf("The imaginary number is : ");
img1.display();


-img1;
printf("The negative of  imaginary number is : ");
img1.display();
}
