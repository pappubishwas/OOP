#include <iostream>
using namespace std;
class base
{
public:
   void fun1()
   {
      cout << "Base1" << endl;
   }
   virtual void fun2()
   {
      cout << "Base2" << endl;
   }
   virtual void fun3()
   {
      cout << "Base3" << endl;
   }
   virtual void fun4()
   {
      cout << "Base4" << endl;
   }
};

class derived : public base
{
public:
   void fun1()
   {
      cout << "Derived1" << endl;
   }
   void fun2()
   {
      cout << "Derived2" << endl;
   }
   void fun4(int x)
   {
      cout << "Derived4" << endl;
   }
};

int main()
{

   base *ptr;
   derived p;
   ptr = &p;

   ptr->fun1();
   ptr->fun2();
   ptr->fun3();
   ptr->fun4();

   return 0;
}
