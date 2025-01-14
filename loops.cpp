#include <iostream>
using namespace std;

void forLoop()
{

  cout << "This is a 'for' loop: " << endl;

  for (int index = 0; index <= 10; index++)
  {
    cout << "Index: " << index << endl;
  }

  // forLoop(); // Recursive call
}

void whileLoop()
{
  cout << "This is a 'while' loop: " << endl;

  int index;
  cout << "Enter index: " << endl;
  cin >> index;

  while (index <= 10)
  {
    cout << "Index: " << index << endl;
    index++;
  }
}

void dowhileLoop()
{
  cout << "This is a 'do while' loop: " << endl;

  int index;
  cout << "Enter index: " << endl;
  cin >> index;

  do
  {
    cout << "Index: " << index << endl;
    index++;
  } while (index <= 10);
}

int main()
{
  forLoop();
  whileLoop();
  dowhileLoop();

  return 0;
}

