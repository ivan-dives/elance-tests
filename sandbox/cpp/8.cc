#include <cmath>
#include <iostream>

/*
int main()
{
	int i, integer;

	std::cin >> integer;

	if (integer < 1 || integer > 500) {
		std::cout << "OUT OF RANGE" << std::endl;
		return 0;
	}

	for (i = 2; i <= sqrt(integer); i++)
		if (integer % i == 0) {
			std::cout << "FALSE" << std::endl;
			return 0;
		}
	std::cout << "TRUE" << std::endl;

	return 0;
}
*/

int main()
{
	bool prime;
	int i, integer;

	while (std::cin >> integer) {
		if (integer < 1 || integer > 500) {
			std::cout << "OUT OF RANGE" << std::endl;
			continue;
		}
		prime = true;
		for (i = 2; i <= sqrt(integer); i++)
			if (integer % i == 0) {
				std::cout << "FALSE" << std::endl;
				prime = false;
				break;
			}
		if (prime)
			std::cout << "TRUE" << std::endl;
	}

	return 0;
}
