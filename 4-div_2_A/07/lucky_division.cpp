#include <bits/stdc++.h>

int main() {
  int inp = 0;
  bool flag = false;
  std::cin >> inp;
  std::vector<int> lucky = {4,   7,   47,  74,  44,  444,
                            447, 474, 477, 777, 774, 744};
  for (int i = 0; i < lucky.size(); ++i) {
    if (inp % lucky[i] == 0) {
      flag = true;
    }
  }

  if (flag == true) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
