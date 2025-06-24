#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Check for all divisors less than the number
    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        cout << num << " is a Perfect Number.";
    else
        cout << num << " is NOT a Perfect Number.";

    return 0;
}
