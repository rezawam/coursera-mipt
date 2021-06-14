#define NUMBER_OF_DAYS 31

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>


int main()
{
	int num = 0, val = 0, month = 1;
	scanf("%d", &num);
	std::vector<std::vector<std::string>> v;
	std::string deal;
	v.resize(NUMBER_OF_DAYS);
	for (int i = 0; i < num; ++i)
	{
		std::string command;
		std::cin >> command;
		if (command == "ADD")
		{
			std::cin >> val >> deal;
			v[val-1].push_back(deal);
		}
		else if (command == "DUMP")
		{
			std::cin >> val;
			std::cout << v[val-1].size() << " ";
			for (auto k : v[val-1]) std::cout << k << " ";
			printf("\n");
		}
		else if (command == "NEXT")
		{
			if (month == 1)
			{
				for (int j = 28; j < 31; ++j)
					v[27].insert(end(v[27]), begin(v[j]), end(v[j]));
				for (int e = 0; e < 3; ++e)
					v.pop_back();
			}
			else if (month == 3 || month == 5 || month == 8 || month == 10)
			{
				v[29].insert(end(v[29]), begin(v[30]), end(v[30]));
				v.pop_back();
			}
			else
				v.resize(31);

			if (month == 12) month = 1;
			else ++month;
		}
	}
	return 0;
}

