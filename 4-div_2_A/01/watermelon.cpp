#include <iostream>

int main() {
	int input = 0;
	std::cin >> input;
	if(input % 2 == 0){
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
	}
	return 0;
}
