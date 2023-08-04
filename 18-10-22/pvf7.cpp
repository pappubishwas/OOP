#include <iostream>
using namespace std;

class base
{
protected:
  int a;

public:
  virtual void fun() = 0;
  base(int i)
  {
    a = i;
  }
};

class derived : public base
{

public:
  int b;
  derived(int i, int j) : base(i)
  {
    b = j;
  }
  void fun()
  {
    cout << "The value of a: " << a << " and b: " << b << endl;
  }
};

int main()
{

  derived d(4, 6);
  d.fun();
  return 0;
}
