/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:12:06 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/19 15:30:23 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	public:
		// CONSTRUCTORS & DESTRUCTOR
		Array()
		{
			this->_arr = new T[0];
			this->_size = 0;
		}
		
		Array(unsigned int n)
		{
			this->_arr = new T[n];
			this->_size = n;
		}

		Array(Array const &src)
		{
			*this = src;
		}
		
		~Array()
		{
			if (this->_arr)
				delete[] this->_arr;
		}
		
		// OPERATOR OVERLOADS
		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				if (this->_arr)
					delete[] this->_arr;
				this->_arr = new T[rhs.size()];
				this->_size = rhs.size();
				for (unsigned int i = 0; i < this->_size; i++)
					this->_arr[i] = rhs[i];
			}
			return *this;
		}
		
		T &operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_arr[i];
		}

		T const &operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_arr[i];
		}
		
		// MEMBERS
		unsigned int size() const
		{
			return this->_size;
		}
		
	private:
		T *_arr;
		unsigned int _size;
};

#endif // ARRAY_HPP