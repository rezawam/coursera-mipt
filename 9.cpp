#include <string>
#include <vector>

void MoveStrings(std::vector<std::string> &source, std::vector<std::string> &destination)
{
	for (auto i : source)
		destination.push_back(i);
	source.clear();
}
