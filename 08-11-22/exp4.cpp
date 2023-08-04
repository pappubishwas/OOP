#include<iostream>
using namespace std;
void test(int n){
    try{
        if(n==1) throw n;
        else if(n==0) throw 'n';
        else if(n==-1) throw 1.0;
        cout<<"End try block"<<endl;
    }
    catch(int k){
        cout<<"Caught an integer"<<endl;
    }
    catch(char k){
        cout<<"Caught an charcter"<<endl;
    }
    catch(double k){
        cout<<"Caught an double"<<endl;
    }
}
int main()
{
test(1);
test(0);
test(-1);
return 0;
}
