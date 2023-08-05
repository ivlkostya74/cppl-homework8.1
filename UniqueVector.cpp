#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
	
	auto print = [](const std::vector<int>& v) {
		for (const auto& i : v)
			std::cout << i << ' ';
		std::cout << std::endl;
	};

	std::cout << "[IN]: ";
	print(vec);

	std::sort(vec.begin(), vec.end()); print(vec);

	auto not_unique = std::unique(vec.begin(), vec.end()); print(vec);
	vec.erase(not_unique, vec.end());

	std::cout << "[OUT]: ";
	print(vec);

	std::cout << std::endl;

	

	

	

	return 0;
}