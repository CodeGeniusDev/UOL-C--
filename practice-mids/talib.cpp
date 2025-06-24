#include <iostream>
using namespace std;
int main ()

{

string name, last_name;
  cout << "Enter your first name: " << endl;
  cin >> name;
  cout << "Enter your last name: " << endl;
  cin >> last_name;
 string full_name;
 full_name = name + " " + last_name;
 cout << "full name is: " << full_name;

 return 0;
 
}