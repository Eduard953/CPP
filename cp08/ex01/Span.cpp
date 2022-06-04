/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:39:49 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/04 11:41:11 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// CONSTRUCTORS | DESTRUCTOR

Span::Span(unsigned int N): _size(N)
{
	if (N == 0)
		throw Span::NoStorageException();
}

Span::Span(Span const &src): _size(src._size)
{
	this->_v.clear();
	this->_v.insert(this->_v.begin(), src._v.begin(), src._v.end());
}

Span::~Span()
{
	this->_v.clear();
}

// OPERATORS

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_v.clear();
		this->_v.insert(this->_v.begin(), rhs._v.begin(), rhs._v.end());
	}
	return *this;
}

// MEMBERS

void Span::addNumber(int num)
{
	if (this->_v.size() < this->_size)
		this->_v.push_back(num);
	else
		throw Span::StorageFullException();
}

void Span::addNumbers(std::vector<int> addv)
{
	if (this->_v.size() + addv.size() > this->_size)
		throw Span::StorageFullException();
	this->_v.insert(this->_v.end(), addv.begin(), addv.end());
}

int Span::shortestSpan(void)
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	else
	{
		std::vector<int> tmp = this->_v;
		std::sort(tmp.begin(), tmp.end());
		int diff = *max_element(tmp.begin(), tmp.end());
		for (unsigned int i = 0; i < tmp.size() - 1; i++)
			if (abs(tmp[i + 1] - tmp[i]) < diff)
				diff = abs(tmp[i + 1] - tmp[i]);
		return (diff);
	}	
}

int Span::longestSpan(void)
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	else
	{
		int max = *max_element(this->_v.begin(),this->_v.end());
		int min = *min_element(this->_v.begin(),this->_v.end());
		return (max - min);
	}
}