#include <iostream>

using namespace std;

void handleName()
{
  string first_name;
  string second_name;

  cout << "Enter first name: ";
  cin >> first_name;

  cout << "Enter second name: ";
  cin >> second_name;

  string fullName = first_name + " " + second_name;

  cout << "Full name is: " << fullName << endl;
}

void handleNumbers()
{
  int a, b;

  cout << "Enter two numbers: " << endl;
  cin >> a >> b;

  cout << "Sum of two numbers: " << a + b << endl;
  cout << "Subtraction of two numbers: " << a - b << endl;
  cout << "Multiplication of two numbers: " << a * b << endl;
  cout << "Division of two numbers: " << (float) a / b << endl; // adding (float) a / b will return numbers in decimal form.
}

int main()
{
  handleName();
  handleNumbers();

  return 0;
}