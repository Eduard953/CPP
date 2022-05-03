/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:03:45 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/03 18:19:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::fstream	file;
	std::fstream	repfile;
	std::string		filename;
	std::string		findstr;
	std::string		replace;
	std::string		line;
	std::size_t		pos;
	if (argc != 4)
	{
		std::cout << "Usage: ./" << argv[0] << " [file] <str1> <str2>" << std::endl;
		return (1);
	}
	file.open(argv[1], std::fstream::in);
	if (!file.is_open())
	{
		std::cout << "File " << argv[1] << " could not be opened" << std::endl;
		return (1);
	}
	filename.assign(argv[1]);
	filename.append(".replace");
	repfile.open(filename, std::fstream::out);
	if (!repfile.is_open())
	{
		std::cout << "File " << filename << " could not be opened" << std::endl;
		return (1);
	}
	findstr.assign(argv[2]);
	replace.assign(argv[3]);
	std::cout << "Searching for: " << findstr << std::endl;
	std::cout << "Replacing with: " << replace << std::endl;
	while (std::getline(file, line))
	{
		while ((pos = line.find(findstr)) != std::string::npos)
		{
			line.erase(pos, findstr.length());
			line.insert(pos, replace);
		}
		repfile << line << std::endl;
	}
	file.close();
	repfile.close();
	return (0);
}