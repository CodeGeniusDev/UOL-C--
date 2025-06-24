#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159

int main() {
  double radius, volume;

  std::cout << "Enter the radius > ";
  std::cin >> radius;

  volume = (4.0 / 3.0) * PI * pow(radius, 3);

  std::cout << "The radius of the sphere is: " << radius << std::endl;
  std::cout << "The volume of the sphere is: " << volume << std::endl;

  return 0;

}
