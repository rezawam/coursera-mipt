#include <vector>
#include <string>

bool isPalindrom(std::string str)
{
	for (int i = 0; i <= str.length(); i++)
		if (str[i] != str[str.length() - (i+1)])
			return 0;
	return 1;
}

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength)
{
	std::vector<std::string> res;
	for (auto i : words)
		if (i.length() >= minLength && isPalindrom(i))
			res.push_back(i);
	return res;
}
