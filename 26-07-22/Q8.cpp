#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter any character : ";
    cin >> ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << endl << ch << " is Alphabet.";
        
    else if(ch >= '0' && ch <= '9') 
        cout << endl << ch << " is Digit.";

    else 
        cout << endl << ch << " is Special symbol.";

    return 0;
}