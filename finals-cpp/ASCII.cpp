#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "The next 5 characters are: ";
    for (int i = 1; i <= ch; i++) {
        cout << char(ch + i) << " ";
    }
    cout << endl;
    return 0;
}
