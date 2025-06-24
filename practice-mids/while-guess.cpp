#include <iostream>
using namespace std;

int main()
{
  int guess;
  int randomNumber = 7; // Fixed number for guessing

  cout << "Guess the number (between 1 and 10): ";
  cin >> guess;

  while (guess != randomNumber)
  {
    cout << "Wrong guess! Try again." << endl;
    cout << "Guess the number (between 1 and 10): ";
    cin >> guess;
  }

  cout << "Correct! You've guessed the number!" << endl;

  return 0;
}