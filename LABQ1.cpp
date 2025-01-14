#include <iostream>
using namespace std;
// Int a;       is declaration
// Int a = 2;   is initialization

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  // Check if the number is even
  if (num % 2 == 0) {
    std::cout << num << " is an even number." << std::endl;
  } else {
    std::cout << num << " is an odd number." << std::endl;
  }
}
