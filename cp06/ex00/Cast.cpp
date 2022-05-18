/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:23:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 14:21:55 by ebeiline         ###   ########.fr       */
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
	try
	{
		this->_out = std::stod(input.c_str(), NULL);
	}
	catch(std::invalid_argument &ia)
	{
		if (input.length() == 1)
			this->_out = static_cast<double>(input.front());
		else
		{
			std::cerr << "Conversions not possible" << std::endl;
			exit(1);
		}
	}
	catch(std::out_of_range &oor)
	{
		std::cerr << "Input out of double range" << std::endl;
		exit(1);
	}
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
	o << i.printChar();
	o << i.printInt();
	o << i.printFloat();
	o << i.printDouble();
	return (o);
}

// GETTERS

double Cast::getOut() const
{
	return (this->_out);
}

// MEMBERS

std::string Cast::printChar() const
{
	std::string out = "char: ";
	try
	{
		char c = static_cast<char>(this->getOut());
		if (isnan(this->_out) || this->_out > static_cast<double>(CHAR_MAX) || this->_out < static_cast<double>(CHAR_MIN))
			out += "impossible";
		else
			std::isprint(c) ? out += c : out += "Non displayable";
	}
	catch(const std::exception& e)
	{
		out += "impossible: " + std::string(e.what());
	}
	return (out + "\n");
}

std::string Cast::printInt() const
{
	std::string out = "int: ";
	try
	{
		int i = static_cast<int>(this->getOut());
		if (isnan(this->_out) || this->_out > static_cast<double>(INT_MAX) || this->_out < static_cast<double>(INT_MIN))
			out += "impossible";
		else
			out += std::to_string(i);
	}
	catch(const std::exception& e)
	{
		out += "impossible: " + std::string(e.what());
	}
	return (out + "\n");
}

std::string Cast::printFloat() const
{
	std::string out = "float: ";
	try
	{
		float f = static_cast<float>(this->getOut());
		out += std::to_string(f) + "f";
	}
	catch(const std::exception& e)
	{
		out += "impossible: " + std::string(e.what());
	}
	return (out + "\n");
}

std::string Cast::printDouble() const
{
	std::string out = "double: ";
	try
	{
		double d = static_cast<double>(this->getOut());
		out += std::to_string(d);
	}
	catch(const std::exception& e)
	{
		out += "impossible: " + std::string(e.what());
	}
	return (out + "\n");
}
