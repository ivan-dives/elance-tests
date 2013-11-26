#include <iostream>	// std::cin, std::cout, std::endl
#include <map>		// std::multimap
#include <string>	// std::string
#include <utility>	// std::pair

int main()
{
	int i, key;
	std::multimap<int, std::string> pairs;
	std::multimap<int, std::string>::iterator iter;
	std::string value;

	for (i = 0; i < 4; i++) {
		std::cin >> key >> value;
		pairs.insert(std::pair<int, std::string>(key, value));
	}
	for (iter = pairs.begin(); iter != pairs.end(); ++iter) {
		if (iter != pairs.begin())
			std::cout << " ";
		std::cout << iter->second;
	}
	std::cout << std::endl;

	return 0;
}

