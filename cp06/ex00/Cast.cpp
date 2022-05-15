/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:23:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/15 13:06:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

// CONSTRUCTORS | DESTRUCTOR

Cast::Cast(): _out(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Cast::Cast(std::string const &input):
{
	std::cout << "Constructor called" << std::endl;
	this->_out = std::stod(input.c_str(), NULL);
}

Cast::Cast(const Cast &src):
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Cast::~Cast()
{
	std::cout << "Destructor called" << std::endl;
}

// OPERATORS

Cast &Cast::operator=(const Cast &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_out = rhs.getOut();
	return (*this);
}

// GETTERS

double Cast::getOut() const
{
	return (this->_out);
}

// MEMBERS

