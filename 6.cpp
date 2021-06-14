#include <stdio.h>
#include <vector>
#include <iterator>
#include <algorithm>

void toBinary(int x, std::vector<int> &res)
{
	if (x == 1) res.push_back(1); 
	else 
	{
		res.push_back(x % 2);
		x /= 2;
		return toBinary(x, res);
	}
}

int main()
{
	std::vector<int> res;
	int x = 0;
	scanf("%d", &x);
	toBinary(x, res);
	std::reverse(res.begin(), res.end());
	for(auto i : res) printf("%d", i);
	return 0;
}
