#include <iostream>	// std::cin
#include <string>	// std::string

int main()
{
	int i, number_of_strings;
	std::string str;

	std::cin >> number_of_strings;
	std::cin.ignore(1, '\n');
	for (i = 0; i < number_of_strings; i++) {
		std::getline(std::cin, str);
		std::cout << (long)str.find('a') + (long)str.find("is") << std::endl;
	}

	return 0;
}

