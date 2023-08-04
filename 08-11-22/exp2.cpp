#include<iostream>
using namespace std;

int main(){
    try{
        throw 6;
    }
    catch(int a){
        cout<<"An exception occured"<<endl;
        cout<<"Exception number is occured"<<a<<endl;
    }
}