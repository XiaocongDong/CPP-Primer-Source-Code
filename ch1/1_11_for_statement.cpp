#include <iostream>

int main() {
  std::cout << "Please input two number, the first number should be less than or equal to the second one" << std::endl;

  int n1, n2 = 0;
  std::cin >> n1 >> n2;

  if (n1 > n2) {
    std::cerr << "Invalid range" << std::endl;
    return 1;
  }

  while(n1 <= n2) {
    std::cout << n1 << std::endl;
    n1++;
  }
  return 0;
}
