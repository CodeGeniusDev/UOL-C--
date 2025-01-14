#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive number (negative to stop): ";
    cin >> number;

    while (number >= 0) {
        sum += number; // Add the positive number to the sum
        cout << "Enter a positive number (negative to stop): ";
        cin >> number;
    }

    cout << "Total sum: " << sum << endl;

    return 0;
}