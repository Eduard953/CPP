/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:48:29 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 19:49:20 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename max>
max GetMax (max a, max b)
{
	return (a > b ? a : b);
}

template <typename min>
min GetMin (min a, min b)
{
	return (a < b ? a : b);
}

template <typename swap>
void Swap (swap &a, swap &b)
{
	swap c = a;
	a = b;
	b = c;
}

#endif // WHATEVER_HPP