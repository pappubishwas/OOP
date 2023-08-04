#include <iostream>
using namespace std;

int main() {
    string str,temp;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            temp = temp + str[i];
        }
    }
    str = temp;
    cout << "Output String: " << str;
    return 0;
}