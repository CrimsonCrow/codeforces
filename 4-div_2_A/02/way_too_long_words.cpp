#include <iostream>
#include <string>

int main() {
	int inp = 0;
	std::cin >> inp;
	while(inp > 0) {
		std::string st;
		std::cin >> st;
		if (st.size() > 10) {
			std::cout << st.front() << std::distance(st.begin()+1, st.end()-1) << st.back() << "\n";
		} else {
			std::cout << st << "\n";
		}
		inp--;
	}

	return 0;
}
