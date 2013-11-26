#include <algorithm>	// std::equal
#include <cctype>		// tolower
#include <iostream>		// std::cin, std::cout
#include <vector>

int main()
{
	int i;
	std::string s;
	std::vector<std::string> v;
	std::vector<std::string>::iterator iter;

	for (i = 0; i < 4; i++) {
		std::cin >> s;
		if (std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin())) {
			std::transform(s.begin(), s.end(), s.begin(), tolower);
			v.push_back(s);
		}
	}
	std::sort(v.begin(), v.end());
	for (iter = v.begin(); iter != v.end(); ++iter)
		std::cout << *iter << std::endl;

	return 0;
}

