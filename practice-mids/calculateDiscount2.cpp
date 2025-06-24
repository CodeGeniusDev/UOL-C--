#include <iostream>
using namespace std;

void checkDiscount()
{
  float totalAmount;

  cout << "Enter the total purchase amount: $" << endl;
  cin >> totalAmount;

  if (totalAmount <= 50)
  {
    cout << "No discount applied for purchases under $50" << endl;
  }
  else if (totalAmount >= 50 && totalAmount <= 99)
  {
    cout << "5% discount applied for purchase amount of $" << totalAmount << endl;
    cout << "Final amount after discount: $" << totalAmount * .95 << endl;
  }
  else if (totalAmount >= 100 && totalAmount <= 199)
  {
    cout << "10% discount applied for purchase amount of $" << totalAmount << endl;
    cout << "Final amount after discount: $" << totalAmount * .90 << endl;
  }
  else if (totalAmount >= 200 && totalAmount <= 299)
  {
    cout << "15% discount applied for purchase amount of $" << totalAmount << endl;
    cout << "Final amount after discount: $" << totalAmount * .85 << endl;
  }
  else
  {
    cout << "20% discount applied for purchase amount of $" << totalAmount << endl;
    cout << "Final amount after discount: $" << totalAmount * .80 << endl;
  }
}

int main()
{
  checkDiscount();

  return 0;
}