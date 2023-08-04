#include <iostream> 
using namespace std; 
class code 
{ 
    private: 
    int id; 
    public: 
    code()
    {
	cout<<"default Constructor"<<endl;
    }
	code(int a)
	{
	id=a;
	}
code (code &x)
{
id=x.id;
}
void display()
{
cout<<id<<endl;
}
};
int main()
{
code A(100);//it called the parameterized constuctor
code B(A);//it called the copy constructor
code C=A; //it called the copy constructor
code D; //it is called default constructor
D=A; //it passed the object A as copy constructor
A.display();
B.display();
C.display();
D.display();

return 0;
}