#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mark;
    mark["Pappu"] = 98;
    mark["Tanny"] = 95;
    mark["Van"] = 88;
    mark["Muhit"] = 92;
    mark.insert({{"Ovi", 80}, {"Emon", 78}});
    map<string, int>::iterator iter;
    for (iter = mark.begin(); iter != mark.end(); iter++)
    {
        cout << (*iter).first << " = " << (*iter).second << endl;
    }
    cout << "This size is:" << mark.size() << endl;
    cout << "This max_size is:" << mark.max_size() << endl;
    cout << "This empty's return value is:" << mark.empty() << endl;
}