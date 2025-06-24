#include <iostream>
using namespace std;

int main() {
    float sum = 0;

    for(int i = 0; i <= 100; i += 2) {
        if(i == 0)
            sum += 1;  // for the first term "1"
        else
            sum += 1.0 / i;
    }

    cout << "Sum of the series = " << sum;

    return 0;
}
