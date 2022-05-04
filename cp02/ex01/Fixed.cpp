/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:35:28 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/04 20:08:21 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _value(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _value(int(roundf(n * (1 << _bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw * (1 << this->_bits);
}

float	Fixed::toFloat() const
{
	std::cout << "toFloat member function called" << std::endl;
	return ((float)(this->getRawBits() / (float)(1 << this->_bits)));
}

int		Fixed::toInt() const
{
	std::cout << "toInt member function called" << std::endl;
	return (this->_value >> _bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}
	