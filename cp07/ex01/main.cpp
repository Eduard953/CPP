/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:40:50 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/19 13:53:52 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::cout << "=============================================" << std::endl;
	std::cout << "Iterate over array of INTs:" << std::endl;
	iter(arr, 5, print);
	std::cout << std::endl;
	iter(arr, 5, add);
	std::cout << "Add +1 using iter" << std::endl;
	iter(arr, 5, print);
	std::cout << std::endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "Iterate over array of Doubles:" << std::endl;
	iter(arr2, 5, print);
	std::cout << std::endl;
	iter(arr2, 5, add);
	std::cout << "Add +1 using iter" << std::endl;
	iter(arr2, 5, print);
	std::cout << std::endl;
	std::cout << "=============================================" << std::endl;
	return (0);
}