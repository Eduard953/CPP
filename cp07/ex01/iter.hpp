/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:41:15 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/30 11:28:13 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void add(T a)
{
	a++;
}

template <typename T>
void print(T a)
{
	std::cout << a << "; ";
}

// template< typename T >
// void print(T a) { std::cout << a << std::endl; return; }

#endif // ITER_HPP