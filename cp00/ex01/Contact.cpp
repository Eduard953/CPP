/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:29:11 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 20:04:00 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{

}

void Contact::set_fname(std::string name)
{
	this->_firstname = name;
}

void	Contact::set_lname(std::string name);
{
	this->_lastname = name;
}

void	Contact::set_nicname(std::string name);
{
	this->_nickname = name;
}

void	Contact::set_num(std::string number);
{
	this->_number = number;
}

void	Contact::set_secr(std::string secret);
{
	this->secret = secret;
}

std::string	Contact::get_fname() const
{
	return (this->_firstname);
}

std::string	Contact::get_lname() const
{
	return (this->_lastname);
}

std::string	Contact::get_nicname() const
{
	return (this->_nickname);
}

std::string	Contact::get_num() const
{
	return (this->_number);
}

std::string	Contact::get_secr() const
{
	return (this->_secret);
}
