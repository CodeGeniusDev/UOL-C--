#include <iostream>

int main()
{
  int num1, num2, subtract, divide, sum, multiply;

  // Two numbers for subtract
  std::cout << "Enter two numbers for subtract: ";
  std::cin >> num1 >> num2;

  subtract = num1 - num2;
  std::cout << "The subtract of the two numbers is " << subtract << std::endl;

  // Two numbers for divide
  std::cout << "Enter two numbers for divide: ";
  std::cin >> num1 >> num2;

  divide = num1 / num2;
  std::cout << "The divide of the two numbers is " << divide << std::endl;

  // Two numbers for sum
  std::cout << "Enter two numbers for sum: ";
  std::cin >> num1 >> num2;

  sum = num1 + num2;
  std::cout << "The sum of the two numbers is " << sum << std::endl;

  // Two numbers for multiply
  std::cout << "Enter two numbers for multiply: ";
  std::cin >> num1 >> num2;

  multiply = num1 * num2;
  std::cout << "The multiply of the two numbers is " << multiply << std::endl;

  return 0;
}