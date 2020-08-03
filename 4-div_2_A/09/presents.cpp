#include <iostream>
#include <vector>

int main() {
  int n = 0, x = 0;
  std::cin >> n;
  std::vector<int> vec;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;
    vec.push_back(x);
  }
  for (int j = 1; j <= n; ++j) {
    for (int i = 0; i <= n; ++i) {
      if (vec[i] == j) {
        std::cout << i + 1 << " ";
      }
    }
  }
}
