#include <cstdio>

int main()
{
	unsigned char c;

	for (c = 40; c <= 126; c++)
		printf("%X-%.3o-%c\n", c, c, c);

	return 0;
}

