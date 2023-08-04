// #include<iostream>
// using namespace std;
// class complex
// {
// float real ,img;

// public:

// void accept(){
// printf("Enter a real part of complex number :");
// cin>>real;
// printf("Enter a imaginary part of a complex number : ");
// cin>>img;
// }

// void display(){
// cout<<real<<" + ("<<img<<")i"<<endl;
// }

// friend complex operator -(complex c1);
// };



// complex operator -(complex c1){

// complex c;
// c.real=-c1.real;
// c.img=-c1.img;
// return (c);
// }

// int main(){
// complex img1,neg;
// img1.accept();
// printf("The imaginary number is : ");
// img1.display();


// neg=-img1;
// printf("The negative of  imaginary number is : ");
// neg.display();
// }


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

friend complex operator ++(complex c1);
};



complex operator ++(complex c1){

complex c;
c.real=++c1.real;
c.img=++c1.img;
return (c);
}

int main(){
complex img1,neg;
img1.accept();
printf("The imaginary number is : ");
img1.display();


neg=++img1;
printf("The negative of  imaginary number is : ");
neg.display();
}
