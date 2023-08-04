#include <iostream>
using namespace std;

class A
{

public:
  virtual void fun1() = 0;
  void display()
  {
    cout << "This a base class A" << endl;
  }
};

int main()
{
  A a;

  return 0;
}
