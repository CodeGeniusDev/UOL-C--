#include <iostream>
using namespace std;

int main()
{
  char grade;
  int choice;

  cout << "Enter your grade (A/B): ";
  cin >> grade;

  switch (grade)
  {
  case 'A':
  case 'a':
    cout << "1. Excellent\n2. Outstanding\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "You did an excellent job!" << endl;
      break;
    case 2:
      cout << "Outstanding performance!" << endl;
      break;
    default:
      cout << "Invalid choice." << endl;
    }
    break;
  case 'B':
  case 'b':
    cout << "Good job!" << endl;
    break;
  default:
    cout << "Invalid grade." << endl;
  }
  return 0;
}
