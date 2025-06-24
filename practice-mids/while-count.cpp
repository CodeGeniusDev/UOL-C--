#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number >= 0) {
        cout << number << endl;
        number--;
    }

    return 0;
}