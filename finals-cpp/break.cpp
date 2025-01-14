#include <iostream>
using namespace std;

int main()
{
  // int f;
  // cout << "Enter a number: ";
  // cin >> f;
  for (int i = 0; i <= 10; i++)
  {
    if (i == 5)
    {
      continue;
    }
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
