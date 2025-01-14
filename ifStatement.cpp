#include <iostream>
using namespace std;

void ifStatement()
{
  int num;
  cout << "Enter a number: " << endl;
  cin >> num;

  if (num > 10)
  {
    cout << "Number is greater than 10" << endl;
  }
  else if (num < 10)
  {
    cout << "Number is less than 10" << endl;
  }
  else
  {
    cout << "Number is equal to 10" << endl;
  }
}

int main(){
  ifStatement();

  return 0;
}