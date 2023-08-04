#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 13, 5, 2};
    // sort(arr,arr+6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        /* code */ cout << arr[i] << endl;
    }
}