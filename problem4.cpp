//Swap two Strings Without Using any Third Variable

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cout << "Enter the first string: ";
    cin >> a;

    cout << "Enter the second string: ";
    cin >> b;

    cout << "Before swapping:" << endl;
    cout << "First string: " << a << endl;
    cout << "Second string: " << b << endl;

    
    a = a + b;
    b = a.substr(0, a.length() - b.length());
    a = a.substr(b.length());

    cout << "After swapping:" << endl;
    cout << "First string: " << a << endl;
    cout << "Second string: " << b << endl;

    return 1;
}
