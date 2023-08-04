#include <iostream>
using namespace std;
class sample
{
	int a;
	public:
	sample()
	{
		a=10;
	}
	operator int()
	{
		int x;
		x=a; 
		return x;
	}
};
int main()
{
	sample s;
	int y= s;
	cout << y;

}
