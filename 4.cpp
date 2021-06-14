#include <iostream>
#include <string>


int main()
{
	std::string s = " ";
	int count = -2, k = 0;

	std::cin >> s;
	for (auto i : s)
	{
		if (i == 'f') count++;
		if (count == 0)
		{
			count = k;
			break;
		}
		k++;
	}
	std::cout << count;
}

