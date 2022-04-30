/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:55:56 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 20:08:05 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::Phonebook() 
{
	this->_num = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_c()
{
	std::string	firstname;
	std::string	lastname;
	std::string nickname;
	std::string	phonenumber;
	std::string darksecret;

	std::cout << "Please add contact, each field must be precisely filled and can't be empty" << std::endl;
	while (firstname.empty())
	{
		std::cout << "Add first name" << std::endl;
		std::getline(std::cin, firstname);
	}
	while (lastname.empty())
	{
		std::cout << "Add last name" << std::endl;
		std::getline(std::cin, lastname);
	}
	while (nickname.empty())
	{
		std::cout << "Add nickname" << std::endl;
		std::getline(std::cin, nickname);
	}
	while (phonenumber.empty())
	{
		std::cout << "Add phone number" << std::endl;
		std::getline(std::cin, phonenumber);
	}
	while(darksecret.empty())
	{
		std::cout << "Add darkest secret" << std::endl;
		std::getline(std::cin, darksecret);
	}
	this->_phonebook[_num].set_fname(firstname);
	this->_phonebook[_num].set_lname(lastname);
	this->_phonebook[_num].set_nicname(nickname);
	this->_phonebook[_num].set_num(phonenumber);
	this->_phonebook[_num].set_secr(darksecret);
	this->_num++;
	if (this->_num > 7)
		this->_num = 0;
}

void PhoneBook::get_c()
{
	
}