#include<iostream>
using namespace std;
void divide(int x,int y,int z){
    cout<<"We are inside function"<<endl;
    try{
            if((x-y)!=0){
        cout<<"Result"<<z/(x-y)<<endl;
    }else{
        throw (x-y);
    }
    }catch(int ){
        cout<<"Caught exception in function"<<endl;
        throw;
    }
        cout<<"We are end of function"<<endl;
}
int main()
{
try{
    cout<<"We are in try block in main"<<endl;
    divide(10,20,30);
    divide(10,10,30);

}catch(int){
    cout<<"Caught Eception in main."<<endl;
}
return 0;
}
