#include <iostream>

int main() {
  int x = 0;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      std::cin >> x;
      if (x == 1) {
        std::cout << std::abs(i - 2) + std::abs(j - 2) << "\n";
      }
    }
  }
  return 0;
}
