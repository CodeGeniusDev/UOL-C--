#include<iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter positive numbers (enter a negative number to stop):" << endl;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            break;
        }
        sum += num;
    }

    cout << "The total sum of positive numbers is: " << sum << endl;

    return 0;
}
