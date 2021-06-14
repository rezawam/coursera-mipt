#include <vector>

void Reverse(std::vector<int> &numbers)
{
	int t = 0;
	for (int i = 0; i < (numbers.size() / 2); ++i)
	{
		t = numbers[i];
		numbers[i] = numbers[numbers.size() - (i+1)];
		numbers[numbers.size() - (i+1)] = t;
	}
}
