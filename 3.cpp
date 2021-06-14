#include <iostream>
#include <cmath>


int main() 
{
	double a = 0, b = 0, c = 0, d = 0, res = 0;
	std::cin >> a >> b >> c;	
	if (a != 0)
	{
		d = sqrt(pow(b, 2) - 4*a*c);
		if (d >= 0)
		{
			res = (-b + d)/(2*a);
			std::cout << res << " ";
		}
		if (d > 0) 
		{
			res = (-b - d)/(2*a);
			std::cout << res << " ";
		}
	}
	else if (a == 0 && b != 0)
	{
		res =  -(c / b);
		std::cout << res;
	}
	return 0;
}
