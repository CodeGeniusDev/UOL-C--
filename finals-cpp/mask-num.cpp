#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The sum of all numbers is: " << sum << endl;
    return 0;
}
