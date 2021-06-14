#include <iostream> 
#include <string>


int main() 
{
	std::string a, b, c, larger;
	std::cin >> a >> b >> c;
	larger = (a >= b) ? b : a;
	larger = (larger >= c) ? c : larger;
	std::cout << larger;

	return 0;

}


