#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string st = "", st2 = "";
	std::cin >> st >> st2;

	std::transform(st.begin(), st.end(), st.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});
	std::transform(st2.begin(), st2.end(), st2.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});

	if(st == st2){
		std::cout << "0\n";
	} else if (st > st2){
		std::cout << "1\n";
	} else {
		std::cout << "-1\n";
	}

	return 0;
}

//76432890 	Apr/12/2020 22:00UTC 	2156200 	112A - Petya and Strings 	GNU C++17 	Accepted 	92 ms 	0 KB
