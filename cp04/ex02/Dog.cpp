/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:56:40 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/28 15:38:02 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CONSTRUCTORS | DESTRUCTOR

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

// OPERATORS

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
		this->_brain = new Brain(*obj._brain);
	return *this;
}

// MEMBER FUNCTIONS

void Dog::makeSound() const
{
	std::cout << "Dog makes bark" << std::endl;
}