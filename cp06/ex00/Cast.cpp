/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:23:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 12:24:48 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

// CONSTRUCTORS | DESTRUCTOR

Cast::Cast(): _out(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Cast::Cast(std::string const &input)
{
	std::cout << "Constructor called" << std::endl;
	this->_out = std::stod(input.c_str(), NULL);
}

Cast::Cast(const Cast &src)
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

std::ostream &operator<<(std::ostream &o, Cast const &i)
{
	Cast::printChar(i, o);
	Cast::printInt(i, o);
	Cast::printFloat(i, o);
	Cast::printDouble(i, o);
	return (o);
}

// GETTERS

double Cast::getOut() const
{
	return (this->_out);
}

// MEMBERS

Cast::printChar(std::ostream o, Cast const &i) const
{
	o << "char: ";
	try
	{
		char c = static_cast<char>(i);
		std::isprint(c) ? o << c : o << "Non displayable";
	}
	catch(const std::exception& e)
	{
		o << "impossible: " << e.what();
	}
	o << std::endl;
}

Cast::printInt(std::ostream o, Cast const &i) const
{
	o << "int: ";
	try
	{
		int i = static_cast<int>(i);
		o << i;
	}
	catch(const std::exception& e)
	{
		o << "impossible: " << e.what();
	}
	o << std::endl;
}

Cast::printFloat(std::ostream o, Cast const &i) const
{
	o << "float: ";
	try
	{
		float f = static_cast<float>(f);
		o << f;
	}
	catch(const std::exception& e)
	{
		o << "impossible: " << e.what();
	}
	o << std::endl;
}

Cast::printDouble(std::ostream o, Cast const &i) const
{
	o << "double: ";
	try
	{
		double d = static_cast<double>(d);
		o << d;
	}
	catch(const std::exception& e)
	{
		o << "impossible: " << e.what();
	}
	o << std::endl;
}
