// Program to count occurrences of a given character in a string.

#include <iostream>
using namespace std;

int main() {
    string word;
    char letter;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter a character to count: ";
    cin >> letter;

    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }

    cout << "count = " << count  << endl;

    return 0;
}
