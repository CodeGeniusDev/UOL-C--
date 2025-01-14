#include <iostream>
using namespace std;

void swapVariables(){
  int x, y;
  int z;

  cout << "Enter values of x and y:" << endl;
  cin >> x >> y;
  cout << "Before swapping x and y are: " << x << " " << y << endl;

  z = x;
  x = y;
  y = z;

  cout << "After swapping x and y are: " << x << " " << y << endl;
}

int main(){
  swapVariables();

  return 0;
}
