// #include <iostream>  
// using namespace std;  
// class test
// {
//  int code; 
//  static int count;
// public:
//   void setcode( )
// {
// 	code=++count;
// }
// void showcode()
// {
// cout<<"object no="<< code<<endl;
// }
// static void showcount()
// {
// cout<<"Count="<< count<<endl;
// }
// };//end of class
// int test::count;
// int main()
// {
// 	test t1,t2;
// 	t1.setcode();
// 	t2.setcode();
// 	test::showcount();
	
// 	test t3;
// 	t3.setcode();
// 	test::showcount();
// 	t1.showcode();
// 	t2.showcode();
// 	t3.showcode();
	
// }



// #include<iostream> 
// using namespace std; 
//   class Point 
// { 
// private: 
//     int x, y; 
// public: 
//     Point(int x1, int y1) 
// 	{ x = x1; y = y1; } 
//       // Copy constructor 
//     Point(const Point &p2) 
// 	{x = p2.x; y = p2.y; } 
//       int getX()            {  return x; } 
//     int getY()            {  return y; } 
// }; 
// int main() 
// { 
//     Point p1(10, 15); // Normal constructor is called here 
//     Point p2 = p1; // Copy constructor is called here 
//   // Let us access values assigned by constructors 
//     cout << "p1.x = " << p1.getX()<< ", p1.y = " << p1.getY(); 

//     cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY(); 
  
//     return 0; 
// }


#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  

int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}  