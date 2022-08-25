/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:55:56 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/25 22:27:17 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
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
	this->_phonebook[_num % 8].set_fname(firstname);
	this->_phonebook[_num % 8].set_lname(lastname);
	this->_phonebook[_num % 8].set_nicname(nickname);
	this->_phonebook[_num % 8].set_num(phonenumber);
	this->_phonebook[_num % 8].set_secr(darksecret);
	this->_num++;
}

std::string PhoneBook::truncate(std::string str) const
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::get_c()
{
	std::string id;
	int			id_int;

	if (this->_num == 0)
	{
		std::cout << "No contacts in the phonebook" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	if (this->_num < 7)
		for (int i = 0; i < this->_num ; i++)
		{
			std::cout << std::setw(10) << i 
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_fname())
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_lname())
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_nicname()) << std::endl;
		}
	else
		for (int i = 0; i < 8 ; i++)
		{
			std::cout << std::setw(10) << i 
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_fname())
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_lname())
			<< "|" << std::setw(10) << this->truncate(_phonebook[i % 8].get_nicname()) << std::endl;
		}
	std::cout << "Please enter the index of the contact you want to see" << std::endl;
	while(id.empty())
		std::getline(std::cin, id);
	id_int = std::stoi(id);
	if (id_int < 0 || id_int > (this->_num - 1) % 8)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "First name: " << this->_phonebook[id_int].get_fname() << std::endl;
		std::cout << "Last name: " << this->_phonebook[id_int].get_lname() << std::endl;
		std::cout << "Nickname: " << this->_phonebook[id_int].get_nicname() << std::endl;
		std::cout << "Phone number: " << this->_phonebook[id_int].get_num() << std::endl;
		std::cout << "Darkest secret: " << this->_phonebook[id_int].get_secr() << std::endl;
	}
}