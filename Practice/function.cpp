// #include <iostream> 
// using namespace std; 
//   void print(int i) { 
//   cout << " Here is int " << i << endl; 
// } 
// double print(double  f) { 
//   return (f+20); 
// } 
// void print(char const *c) { 
//   cout << " Here is char* " << c << endl; 
// } 
//   int main() { 
//   print(10); 
//   cout<<"Return:"<<  print(10.10)<<endl; 
//   print("ten");
//   print(10);  
//   return 0; 
//   }

//Parameter should be different..............



// #include <iostream> 
// using namespace std; 
//   void print(int i) { 
//   cout << " Here is int " << i << endl; 
// } 
// void print(int  f) { 
//   cout << " Here is float " << f << endl; 
// } 
// void print(char const *c) { 
//   cout << " Here is char* " << c << endl; 
// } 
//   int main() { 
//   print(10); 
//   print(10.10); 
//   print("ten"); 
//   return 0; 
//   }


// #include<iostream> 
// using namespace std; 
// class Base 
// { 
// public: 
//     virtual void show() = 0; 
// }; 
  
// class Derived : public Base { }; 
  
// int main(void) 
// { 
//   Derived *d; 
//   return 0; 
// }


// #include<iostream> 
// using namespace std; 
  
// class Test 
// { 
//    int x; 
// public: 
//     virtual void show() = 0; 
//     int getX() { return x; } 
// }; 
//   int main(void) 
// { 
//     Test *t; 
//     return 0; 
// } 

#include<iostream>
using namespace std; 
class minutes  // sourse class
{
int m;
public:
minutes(int ms)
{
m=ms;
}
void show(){cout << m;}
int getdata()
{
	return m;
}
};

class hours  // destination
{
	int h;
	public:
	hours()
	{
		h=0;
	}
	void show()
	{
	    cout<< "\nhour "<<h;
	}
	hours (minutes &mm)
	{
		h=mm.getdata()/60;
	}
};

int main()
{
 minutes min(60); hours hr;
hr=min;
min.show();
hr.show();
}
