#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
	int coins = 0;
	std::cin >> coins;
	std::vector<int> arr;
	int x;
	for(int i = coins; i > 0; i--){
		std::cin >> x;
		arr.push_back(x);
	}

	int sum = std::accumulate(arr.begin(), arr.end(),0) / 2;
	std::sort(arr.begin(), arr.end(), std::greater<int>());
	
	int m = 0;
	std::size_t sz = 0;

	while (m <= sum){
		m += arr[sz++];
	}

	std::cout << sz << "\n";

	return 0; 
}
