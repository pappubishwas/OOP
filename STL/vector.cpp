#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v) //passing a vector as a argument
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout << v.at(i) << " "; //access or point  a vector element
    }
}
int main()
{
    vector<int> v;//declear a vector
    int x;
    for (int i = 0; i < 4; i++)
    {
        // cout<<"Enter the element in vector: ";
        // cin>>x;
        v.push_back(i); //enter a element at end
    }
    // v.pop_back();
    //  v.erase(v.begin()+3); //remove 4th element from vector from begin
    //  v.erase(v.begin(),v.begin()+4); //first 4 element will be remove

    // display(v);
     vector <int>:: iterator iter=v.begin(); //for pointing every element or iterate a loop
      v.insert(iter+3,100); // insert a element at specific position and how number times
    display(v);
    return 0;
}