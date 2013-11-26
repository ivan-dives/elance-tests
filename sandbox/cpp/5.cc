#include <algorithm>	// std::sort
#include <iostream>		// std::cin, std::cout
#include <string>		// std::string

#define BUFLEN 6

int main()
{
	int i;
	std::string strings[BUFLEN];

	for (i = 0; i < BUFLEN; i++)
		std::cin >> strings[i];
	std::sort(strings, strings + BUFLEN);
	for (i = 0; i < BUFLEN; i++)
		std::cout << strings[i] << std::endl;

	return 0;
}

