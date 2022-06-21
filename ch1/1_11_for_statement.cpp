#include <iostream>

int main() {
  std::cout << "Please input two number, the first number should be less than or equal to the second one" << std::endl;

  int n1, n2 = 0;
  std::cin >> n1 >> n2;

  if (n1 > n2) {
    std::cerr << "Invalid range" << std::endl;
    return 1;
  }

  for (int i = n1; i <= n2; i++) {
    std::cout << i << std::endl;
  }
  return 0;
}
