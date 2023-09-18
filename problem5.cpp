//Swap two numbers without using a temporary variable

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number (a): ";
    cin >> a;

    cout << "Enter the second number (b): ";
    cin >> b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

   //Logic
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
