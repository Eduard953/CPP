/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:37:15 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/04 11:33:26 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _v;
		
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void addNumber(int num);
		void addNumbers(std::vector<int> v);
		int shortestSpan(void);
		int longestSpan(void);

		class StorageFullException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Storage full.";
				}
		};
		class NoSpanException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Not enough elements for span.";
				}
		};
		class NoStorageException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "No storage allocated";
				}
		};
};

#endif // SPAN_HPP