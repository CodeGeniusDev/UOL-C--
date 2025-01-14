#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
  float radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;

  float circumference = 2 * PI * radius;
  cout << "The circumference of the circle is: " << circumference << endl;
  return 0;
}
