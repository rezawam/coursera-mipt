#include <iostream>
#include <map>
#include <vector>
#include <string>


std::map<std::string, std::vector<std::string>> reverseMap(std::map<std::string, std::vector<std::string>> map)
{
	std::map<std::string, std::vector<std::string>> rmap;
	for (auto i : map)
		for (auto j : i.second)
			rmap[j].push_back(i.first);
	return rmap;
}


void printStops(std::map<std::string, std::vector<std::string>> map, std::string bus)
{
	if (map.find(bus) == map.end())
		std::cout << "No bus\n";
	else
	{
		std::map<std::string, std::vector<std::string>> rmap = reverseMap(map);
		for (auto i : map[bus])
		{
			std::cout << "Stop " << i << ": ";
			if (rmap[i].size() == 1)
				std::cout << "no interchange";
			for (auto k : rmap[i])
			{
				if (k != bus)
					std::cout << k << " ";
			}
			std::cout << "\n";
		}
	}
}


void printBuses(const std::map<std::string, std::vector<std::string>> &map, std::string stop)
{
	if (map.find(stop) == map.end())
		std::cout << "No stop\n";
	else
	{
		for (auto i : map)
		{
			if (i.first == stop)
			{
				for (auto j : i.second)
					std::cout << j << " ";
				std::cout << "\n";
			}
		}
	}
}

void printMap(const std::map<std::string, std::vector<std::string>> &map)
{
	if (map.size() == 0) std::cout << "No buses\n";
	else
	{
		for (auto i : map)
		{
			std::cout << "Bus " << i.first << ": ";
			for (auto j : i.second)
				std::cout << j << " ";
			std::cout << "\n";
		}
	}
}


int main()
{
	int num = 0, stops_count;
	std::string bus_name, stop_name;
	std::map<std::string, std::vector<std::string>> buses, stops; // bus -> its stops
	std::string command;

	std::cin >> num;
	for (int i = 0; i < num; ++i)
	{
		std::cin >> command;
		if (command == "NEW_BUS")
		{
			std::cin >> bus_name >> stops_count;
			for (int j = 0; j < stops_count; ++j)
			{
				std::cin >> stop_name;
				buses[bus_name].push_back(stop_name);
			}
		}
		else if (command == "BUSES_FOR_STOP") // show buses for stop
		{
			std::cin >> stop_name;
			printBuses(reverseMap(buses), stop_name); // show stop? no
		}
		else if (command == "STOPS_FOR_BUS") // show stops for bus
		{
			std::cin >> bus_name;
			printStops(buses, bus_name); // show stop? yes
		}
		else if (command == "ALL_BUSES")
		{
		printMap(buses);
		}
	}
}


