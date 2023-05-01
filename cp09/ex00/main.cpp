/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:55:56 by ebeiline          #+#    #+#             */
/*   Updated: 2023/05/01 15:42:02 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

static bool february_fix(std::string date)
{
	int dt[3] = {0};
	for (size_t i = 0; i < 3 && !date.empty(); i++)
	{
		std::string tmp = date.substr(0, date.find('-'));
		date.erase(0, date.find('-') + 1);
		dt[i] = std::atoi(tmp.c_str());
	}
	if (dt[1] == 2)
	{
		if (dt[0] % 4 != 0 && dt[2] == 29)
			return false;
		if (dt[2] == 30 || dt[2] == 31)
			return false;
	}
	return true;
}

static bool is_float_helper(const std::string &str)
{
	std::string::const_iterator it = str.begin();
	while (it != str.end()) 
	{
		if (!std::isdigit(*it))
			return false;
		it++;
	}
	return true;
}

static bool is_float(const std::string &str)
{
	size_t pos = str.find('.');

	if (pos == 0 || pos == str.length() - 1)
		return false;
	if (pos == std::string::npos)
		return is_float_helper(str);
	
	return (is_float_helper(str.substr(0, pos)) && is_float_helper(str.substr(pos + 1)));
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong amount of arguments.\n";
		return (1);
	}
	
	std::ifstream in_db(argv[1]);
	if (!in_db.good())
	{
		std::cerr << "Error: could not open 'test.txt'.\n";
		return (1);
	}
	
	std::string line;
    std::map<std::string, float, std::greater<std::string> > db_map;
	
	{
		std::ifstream db("data.csv");
		if (!db.good())
		{
			std::cerr << "Error: could not open 'data.csv'.\n";
			return (1);
		}
		while (std::getline(db, line))
		{
			std::string value = line.substr(line.find(',') + 1);
			float val = atof(value.c_str());
			std::string date = line.substr(0, line.find(','));
			db_map[date] = val;
		}
		
	}

	// checking the test.txt file
	
	while (std::getline(in_db, line))
	{
		// get divider "|" position and create two substrings if positive
		size_t pos = line.find('|');
		if (pos == std::string::npos || pos == 0 || pos == line.length() - 1)
		{
			std::cout << "Error: invalid format.\n";
			continue;
		}
		if (line.substr(pos + 1, 1) != " " || line.substr(pos - 1, 1) != " ")
		{
			std::cout << "Error: invalid format (check spaces).\n";
			continue;
		}
		
		std::string date = line.substr(0, pos - 1);
		std::string value = line.substr(pos + 2);

		if (date == "date" && value == "value")
			continue;
		
		// check date
		tm tm;
		if (!strptime(date.c_str(), "%Y-%m-%d", &tm)|| !february_fix(date))
		{
			std::cout << "Error: invalid date.\n";
			continue;
		}
		
		// check if number is float
		if (!is_float(value))
		{
			std::cout << "Error: invalid value.\n";
			continue;
		}
		float val = std::atof(value.c_str());
		
		// check if value over 1000
		if (val > 1000)
		{
			std::cout << "Error: value over 1000.\n";
			continue;
		}

		
		
		std::map<std::string, float, std::greater<std::string> >::iterator it = db_map.lower_bound(date);
		std::cout << date << " => " << val << " = " << it->second * val << std::endl;
		
	}

	return (0);
}