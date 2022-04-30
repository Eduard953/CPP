/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:46:17 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 20:46:21 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook book;

	std::cout << "Welcome to your Phonebook" << std::endl;
	while (true)
	{
		std::cout << "You can ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, input))
			std::exit(1);
		else if (input == "EXIT")
			std::exit(0);
		else if (input == "ADD")
			book.add_c();
		else if (input == "SEARCH")
			book.get_c();
		else
			std::cout << "You can only ADD, SEARCH or EXIT" << std::endl;
		input.clear();
		std::cin.clear();
	}
	return 0;
}