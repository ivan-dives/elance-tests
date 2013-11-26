#include <iostream>

int main()
{
	int n, f;

	for (n = 258, f = 265; n <= 393; n++)
		if (n != f)
			std::cout << n << std::endl;
		else
			f += 10;

	return 0;
}

