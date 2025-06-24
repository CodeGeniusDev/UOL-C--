#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;

    for(;;) {
        cin >> n;
        if(n == -1) break;

        if(n != -1) {
            sum += n;
            count++;
        }
    }

    if(count > 0)
        cout << "Sum = " << sum << "\nAvg = " << sum / count;
    
    return 0;
}
