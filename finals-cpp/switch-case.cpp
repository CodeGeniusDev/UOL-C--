#include <iostream>
using namespace std;

int main()
{
  int choice;
  cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
  cout << "Enter your choice: ";
  cin >> choice;

  int a, b;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;

  switch (choice)
  {
  case 1:
    cout << "Result: " << a + b << endl;
    break;
  case 2:
    cout << "Result: " << a - b << endl;
    break;
  case 3:
    cout << "Result: " << a * b << endl;
    break;
  case 4:
    if (b != 0)
    {
      cout << "Result: " << a / b << endl;
    }
    else
    {
      cout << "Division by zero is not allowed." << endl;
    }
    break;
  default:
    cout << "Invalid choice." << endl;
  }
  return 0;
}
