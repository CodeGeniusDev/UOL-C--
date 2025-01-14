#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is the largest." << endl;
    }
    else
    {
      cout << c << " is the largest." << endl;
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is the largest." << endl;
    }
    else
    {
      cout << c << " is the largest." << endl;
    }
  }
  return 0;
}
