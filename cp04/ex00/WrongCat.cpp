/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:01:16 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 12:02:03 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// CONSTRUCTORS | DESTRUCTOR

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// OPERATORS

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return *this;
}

// MEMBER FUNCTIONS

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes meow" << std::endl;
}