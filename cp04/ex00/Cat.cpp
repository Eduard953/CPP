/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:40:34 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 11:53:50 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CONSTRUCTORS | DESTRUCTOR

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// OPERATORS

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return *this;
}

// MEMBER FUNCTIONS

void Cat::makeSound() const
{
	std::cout << "Cat makes meow" << std::endl;
}