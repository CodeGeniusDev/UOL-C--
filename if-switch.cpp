#include <iostream>

using namespace std;

void ageMeasuring()
{
  int age;

  cout << "Enter age: ";
  cin >> age;

  if (age > 120 || age < 5)
  {
    cout << "Invalid age. Age must be between 18 and 120." << endl;
  }

  else if (age >= 16 && age < 18)
  {
    cout << "You are eligible to vote, but you must be accompanied by a parent or guardian." << endl;
  }

  else if (age >= 18)
  {
    cout << "You are eligible to vote." << endl;
  }

  else
  {
    cout << "You are not eligible to vote." << endl;
  }
}

void ageSwitch()
{
  int age;

  cout << "Enter age: ";
  cin >> age;

  switch (age)
  {
  case 12:
    cout << "You are not a member of the team." << endl;
    break;

  case 18:
    cout << "You are now a member of the team." << endl;
    break;

  default:
    cout << "You are neither 12 nor 18 years old." << endl;
    break;
  }
}

int main()
{
  ageMeasuring();
  ageSwitch();

  return 0;
}