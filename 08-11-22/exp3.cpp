#include<iostream>
using namespace std;
void divide(int x,int y,int z){
    cout<<"We are inside function"<<endl;
    if((x-y)!=0){
        cout<<"Result"<<z/(x-y)<<endl;
    }else{
        throw (x-y);
    }
}
int main()
{
try{
    cout<<"We are in try block"<<endl;
    divide(10,20,30);
    divide(10,10,30);

}catch(int j){
    cout<<"Caught Eception."<<endl;
}
return 0;
}
