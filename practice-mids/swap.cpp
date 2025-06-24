#include <iostream>

using namespace std;

void swapNumbers(){
  int n1, n2;
  int z;
  cout << "Enter a number 1: " << endl;
  cin >> n1;

  cout << "Enter a number 2: " << endl;
  cin >> n2;

  cout << "Numbers are:  " << n1 << n2 << endl;

  z = n1;
  n1 = n2;
  n2 = z;

  cout << "Numbers are:  " << n1 << n2 << endl;
}

int main(){
  swapNumbers();

  return 0;
}