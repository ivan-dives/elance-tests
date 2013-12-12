#include <cmath>
#include <iostream>

bool prime(const int x)
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}


int main()
{
	int integer;

	while (std::cin >> integer) {
		if (integer == 0)
			return 0;
		if (integer < 1 || integer > 500) {
			std::cout << "OUT OF RANGE" << std::endl;
			continue;
		}
		if (!prime(integer))
			std::cout << "FALSE" << std::endl;
		else
			std::cout << "TRUE" << std::endl;
	}

	return 0;
}

