#include <algorithm>	// std::find_if, std::sort
#include <cstdio>		// scanf
#include <iostream>		// std::cout, std::endl
#include <utility>		// std::pair
#include <vector>		// std::vector

class student_records : public std::vector<std::pair<int, int> >
{
public:
	typedef std::pair<int, int> pair_t;

	// for std::find_if
	class compare_rollnum_functor
	{
		int _rollnum;
	public:
		compare_rollnum_functor(int __rollnum) : _rollnum(__rollnum) {}
		bool operator()(pair_t &p) { return rollnum(p) == _rollnum; }
	};

	static int & rollnum(const iterator & iter) { return iter->first; }
	static int & rollnum(pair_t & p) { return p.first; }
	static int & score(const iterator & iter) { return iter->second; }
	static int & score(pair_t & p) { return p.second; }

	static bool compare_scores(pair_t a, pair_t b) { return score(a) < score(b); }
};

int main()
{
	int i, rollnum, score;
	student_records records;
	student_records::iterator iter;

	for (i = 0; i < 10; i++) {
		scanf("%d-%d", &rollnum, &score);
		if ((iter = std::find_if(records.begin(), records.end(), student_records::compare_rollnum_functor(rollnum))) != records.end()) {
			if (student_records::score(iter) < score)
				student_records::score(iter) = score;
		} else
			records.push_back(student_records::pair_t(rollnum, score));
	}
	std::sort(records.begin(), records.end(), student_records::compare_scores);
	for (iter = records.end(); iter != records.begin();) {
		--iter;
		std::cout << student_records::rollnum(iter) << "-" << student_records::score(iter) << std::endl;
	}

	return 0;
}

