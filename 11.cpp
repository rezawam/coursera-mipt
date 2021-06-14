#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int main()
{
	int n = 0, val = 0;
	std::string command;
	std::vector<bool> v; // false if quiet, true if worried
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> command;
		if (command == "WORRY")
		{
			scanf("%d", &val);
			v[val] = true;
		}
		else if (command == "QUIET")
		{
			scanf("%d", &val);
			v[val] = false;
		}
		else if (command == "COME")
		{
			scanf("%d", &val);
			v.resize(v.size() + val);
		}
		else if (command == "WORRY_COUNT")
		{
			val = 0;
			for (auto k : v)
				if (k) ++val;
			std::cout << val << "\n";
		}
	}
}


