/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:00:23 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 12:01:02 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//	CONSTRUCTORS | DESTRUCTOR

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


// OPERATORS


WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return *this;
}

// GETTERS

std::string WrongAnimal::getType() const
{
	return this->_type;
}

// MEMBER FUNCTIONS

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes rrrrrrrrrrrh" << std::endl;
}