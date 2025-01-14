#include <iostream>
using namespace std;

void calculateDiscount()
{
    float purchaseAmount;
    char checkAnotherPurchase;

    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    if (purchaseAmount < 50)
    {
        cout << "No discount applied for purchases under $50" << endl;
    }
    else if (purchaseAmount >= 50 && purchaseAmount <= 99)
    {
        cout << "5% discount applied for purchase amount of $" << purchaseAmount << endl;
        cout << "Final amount after discount: $" << purchaseAmount * .95 << endl;
    }
    else if (purchaseAmount >= 100 && purchaseAmount <= 199)
    {
        cout << "10% discount applied for purchase amount of $" << purchaseAmount << endl;
        cout << "Final amount after discount: $" << purchaseAmount * .90 << endl;
    }
    else
    {
        cout << "15% discount applied for purchase amount of $" << purchaseAmount << endl;
        cout << "Final amount after discount: $" << purchaseAmount * .85 << endl;
    }

    cout << "Do you want to check another purchase? (Y/N): ";
    cin >> checkAnotherPurchase;

    if (checkAnotherPurchase == 'Y' || checkAnotherPurchase == 'y')
    {
        calculateDiscount();
    }
    else
    {
        cout << "Thank you for using the discount calculator." << endl;
    }
}

int main()
{
    calculateDiscount();
    return 0;
}
