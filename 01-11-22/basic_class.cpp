#include<iostream>
using namespace std;
class A{
int a;
public:
A(){}
A(int x){a=x;}
void display(){
    cout<<"a= "<<a<<endl;
}
};
int main(){
    int m=10;
    A s;
    s=m;
    s.display();
}


// #include <iostream>
// using namespace std;
// class data
// {
// 	int x;
//     float f;
// 	public:
// 	data()
// 	{
// 	x=0; f=0;
// 	}
// 	data(float m)
// 	{
// 	x=2; f=m;
// 	}

// void show()
// {
// cout<< x<<"  "<<f<<endl;
// }
// };
// int main()
// {
// 	data z;
// 	z=1;
// 	z.show();
// 	z=2.5;
// 	z.show();
// }
