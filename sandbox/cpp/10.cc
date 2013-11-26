#include <cmath>
#include <iostream>

int main()
{

	int i, p;

	for (i = 2;;i++) {
		p = pow(i, 3);
		if (p < 500)
			continue;
		if (p > 10000)
			break;
		std::cout << p << std::endl;
	}

	return 0;
}

