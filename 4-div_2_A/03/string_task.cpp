#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string st = "";
	std::string re = "";
	std::cin >> st;
	std::transform(st.begin(), st.end(), st.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});
	for (auto i : st){
		if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u' && i != 'y'){
			re.append(1,'.');
			re.append(1,i);
		}
	}
	std::cout << re << "\n";

	return 0;
}

//76432065 	Apr/12/2020 21:40UTC 	2156200 	A - String Task 	GNU C++17 	Accepted 	62 ms 	0 KB 
