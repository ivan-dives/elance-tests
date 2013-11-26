#include <iostream>	// std::cin
#include <string>	// std::string

int main()
{
	int i, number_of_strings;
	std::string str;

	std::cin >> number_of_strings;
	std::cin.ignore();
	for (i = 0; i < number_of_strings; i++) {
		std::getline(std::cin, str);
		long a = str.find('a');
		long is = str.find("is");
		std::cout << a + is << std::endl;
	}

	return 0;
}

