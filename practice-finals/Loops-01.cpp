#include <iostream>
using namespace std;

int main() {
    int count = 0, num = 2, sum = 0;

    cout << "First 20 Even Numbers are:\n";

    while(count < 20) {
        cout << num << " ";
        sum += num;
        num += 2;
        count++;
    }

    float average = sum / 20.0;

    cout << "\nAverage = " << average;

    return 0;
}
