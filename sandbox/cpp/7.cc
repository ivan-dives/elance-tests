#include <algorithm>	// std::sort
#include <iostream>		// std::cin, std::cout
#include <vector>		// std::vector

int main()
{
	int i, lista_len, listb_len, t;
	std::vector<int> list;
	std::vector<int>::iterator iter;

	std::cin >> lista_len >> listb_len;
	for (i = 0; i < lista_len + listb_len; i++) {
		std::cin >> t;
		list.push_back(t);
	}
	std::sort(list.begin(), list.end());
	for (iter = list.end(); iter != list.begin();) {
		--iter;
		std::cout << *iter << std::endl;
	}

	return 0;
}
