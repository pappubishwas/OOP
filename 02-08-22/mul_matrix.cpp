#include<iostream>
using namespace std;
int main()
{
    int i,j,k,mul[3][3],a[3][3],b[3][3];
    cout<<"Give the element of matrix A: "<<endl;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    cin>>a[i][j];

    cout<<endl<<"Give the element of matrix B: "<<endl;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    cin>>b[i][j];
    cout<<"Matrix A:"<<endl;
    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 3; j++)
    cout<< a[i][j]<<"  ";

    cout<<endl;
    }
     cout<<"Matrix B:"<<endl;
    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 3; j++)
    cout<< b[i][j]<<"  ";

    cout<<endl;
    }

    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 3; j++)
    {
        mul[i][j]=0;
        for ( k = 0; k < 3; k++)
            mul[i][j]=mul[i][j] + a[i][k]*b[k][j];
        
    }  
    }

    cout<<"multiple of two matrix:"<<endl;
    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 3; j++)
    cout<< mul[i][j]<<"  ";

    cout<<endl;
    }

    return 0;
}