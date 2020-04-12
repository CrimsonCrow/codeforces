#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	std::string st = "";
	std::cin >> st;
	std::vector<char> vc;
	std::string re = "";

	for(auto i : st) {
		if(i == '+'){
			continue;
		} else {
			vc.push_back(i);
		}
	}
	
	std::sort(vc.begin(), vc.end());
	for(auto i : vc){
		re.append(1,i);
		re.append(1,'+');
	}
	re.erase(re.end()-1);
	std::cout << re << "\n";

	return 0;
}

//76434399 	Apr/12/2020 22:38UTC 	2156200 	339A - Helpful Maths 	GNU C++17 	Accepted 	62 ms 	0 KB
