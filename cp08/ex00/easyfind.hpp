/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:38 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/01 14:33:05 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <array>
#include <list>
#include <set>
#include <deque>

#ifndef EASYFIND_HPP
	#define EASYFIND_HPP

class NotFoundException: public std::exception
{
	public:
		char const *what() const throw()
		{
			return ("Value not found");
		}
};

template <typename T>
void easyfind(T &a, int i){
	if (std::find(a.begin(), a.end(), i) != std::end(a))
		std::cout << i << ", found at index: " << std::distance(a.begin(), std::find(a.begin(), a.end(), i)) + 1 << std::endl;
	else
		throw NotFoundException();
};

#endif //EASYFIND_HPP
