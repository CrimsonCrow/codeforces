#include <iostream>

int main() {
	int input = 0;
	std::cin >> input;
	if(input % 2 == 0 && input > 2){
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
	}
	return 0;
}

//76430092 Apr/12/2020 21:01 UTC 2156200 A - Watermelon GNU C++17 Accepted 62 ms 0 KB 
