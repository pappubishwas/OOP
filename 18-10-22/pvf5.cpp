#include <iostream>
using namespace std;

class A
{
public:
  virtual void show() = 0;
};

class B : public A
{

public:
  void show()
  {
    cout << "It is derived class " << endl;
  }
};

int main()
{
  A *ptr = new B();
  ptr->show();

  return 0;
}
