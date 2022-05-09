/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:11:42 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 13:59:30 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


// OPERATORS


Animal& Animal::operator=(const Animal &obj)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return *this;
}

// GETTERS

std::string Animal::getType() const
{
	return this->_type;
}