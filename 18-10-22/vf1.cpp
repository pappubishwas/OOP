#include <iostream>
using namespace std;

class base
{
public:
  virtual void print()
  {
    cout << "This is base class" << endl;
  }
  void show()
  {
    cout << "This is base class" << endl;
  }
};

class derived : public base
{
public:
  void print()
  {
    cout << "This is derived " << endl;
  }
  void show()
  {
    cout << "This is derived   " << endl;
  }
};

int main()
{
  base *btr=new derived();

  // derived p;
  // btr = &p;
  btr->print();
  base &bp=*btr;
  bp.print();
  cout<<sizeof(btr)<<endl;
  // btr->show();

  return 0;
}
