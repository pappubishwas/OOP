#include<iostream>
using namespace std;
void test(int n){
    try{
        if(n==1) throw n;
        else if(n==0) throw 'n';
        else if(n==-1) throw 1.0;
        cout<<"End try block"<<endl;
    }
    catch(...){
        cout<<"Caught an exception"<<endl;
    }

}
int main()
{
    cout<<"Generic test catch"<<endl;
test(1);
test(0);
test(-1);
return 0;
}
