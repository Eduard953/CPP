/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:35:28 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/05 12:30:01 by ebeiline         ###   ########.fr       */
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

Fixed::Fixed(const float n): _value(int(roundf(n * (1 << Fixed::_bits))))
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
	this->_value = raw;
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

bool	Fixed::operator==(const Fixed &cmp) const
{
	return (this->getRawBits() == cmp.getRawBits());
}

bool	Fixed::operator!=(const Fixed &cmp) const
{
	return (this->getRawBits() != cmp.getRawBits());
}

bool	Fixed::operator<(const Fixed &cmp) const
{
	return (this->getRawBits() < cmp.getRawBits());
}

bool	Fixed::operator>(const Fixed &cmp) const
{
	return (this->getRawBits() > cmp.getRawBits());
}

bool	Fixed::operator<=(const Fixed &cmp) const
{
	return (this->getRawBits() <= cmp.getRawBits());
}

bool	Fixed::operator>=(const Fixed &cmp) const
{
	return (this->getRawBits() >= cmp.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->getRawBits() + rhs.getRawBits()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->getRawBits() - rhs.getRawBits()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed result(*this);
	result.setRawBits(((long)this->getRawBits() * (((long)rhs.getRawBits()) / (1 << Fixed::_bits)) ));
	return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed result(*this);
	if (rhs._value == 0)
	{
		std::cout << "Division by zero" << std::endl;
		return (result);
	}
	result.setRawBits(((long)this->getRawBits() * (1 << Fixed::_bits)) / (long)rhs.getRawBits());
	return result;
}


Fixed &Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}
	