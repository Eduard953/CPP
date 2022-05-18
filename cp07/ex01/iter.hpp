/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:41:15 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 20:43:50 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP

template <typename T>
void iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

