#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream outf("x1.txt");
    cout<<"Enter your name:";
    string name;
    getline(cin,name);
    outf<<name<<endl;
    char address[30];
    cout<<"Enter your address:";
    cin.getline(address,30);
    outf<<address<<endl;
    outf.close();

}



// #include<iostream>
// #include<stdlib.h>

// using namespace std;
// class student
// {
// 	string name;
// 	int age;
// public:
// 	student()
// 	{
// 		cout<< "Constructor is called\n" ;
// 	}
// 	student(string name, int age)
// 	{
// 		this->name = name;
// 		this->age = age;
// 	}
// 	void display()
// 	{
// 		cout<< "Name:" << name << endl;
// 		cout<< "Age:" << age << endl;
// 	}
// 	void * operator new(size_t size)
// 	{
// 		cout<< "Overloading new operator with size: " << size << endl;
// 		void * p = ::operator new(size);
	
// 		return p;
// 	}

// 	void operator delete(void * p)
// 	{
// 		cout<< "Overloading delete operator " << endl;
// 		free(p);
// 	}
// };

// int main()
// {
// 	student * p = new student("Pappu", 24);

// 	p->display();
// 	delete p;
// }
