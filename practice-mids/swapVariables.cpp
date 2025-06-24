#include <iostream>
using namespace std;

void declare3rdVariable()
{
  int x, y;
  int z;

  cout << "Enter values of x and y:" << endl;
  cin >> x >> y;
  cout << "Before swapping, x and y are: " << x << " " << y << endl;

  z = x;
  x = y;
  y = z;

  cout << "After swapping, x and y are: " << x << " " << y << endl;
}

void notDeclare3rdVariable()
{
  int x, y;

  cout << "Enter values of x and y:" << endl;
  cin >> x >> y;
  cout << "Before swapping, x and y are: " << x << " " << y << endl;

  x = x + y; // suppose x = 10, y = 20, then x = 10 + 20 = 30
  y = x - y; // y = x - y = 30 - 20 = 10
  x = x - y; // x = x - y = 30 - 10 = 20

  cout << "After swapping, x and y are: " << x << " " << y << endl;
}

int main()
{
  declare3rdVariable();
  notDeclare3rdVariable();

  return 0;
}