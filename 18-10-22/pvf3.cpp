#include <iostream>
using namespace std;

class A
{
public:
  virtual void print() = 0;
  virtual void print1() = 0;
  void print2()
  {
    cout << "This is a base print2" << endl;
  }
};

class B : public A
{

public:
  void print()
  {
    cout << "This is a derived print" << endl;
  }
  void print1()
  {
    cout << "This is a derived print1" << endl;
  }
};

int main()
{
  A *a;
  B b;

  a = &b;
  a->print();
  a->print1();
  a->print2();

  return 0;
}
