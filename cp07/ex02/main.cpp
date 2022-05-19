/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:25:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/19 15:33:31 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string>

int main(void)
{
	Array<std::string> str(10);
	Array<int> ints(10);
	Array<float> floats(10);
	
	str[0] = "Hello";
	str[1] = "World";
	str[2] = "!";
	str[9] = "42";

	ints[0] = 42;
	ints[1] = 69;
	ints[2] = 420;
	ints[9] = 6969;

	floats[0] = 3.14;
	floats[1] = 2.718;
	floats[2] = 42.42;
	floats[9] = 69.69;

	std::cout << "=============================================" << std::endl;
	std::cout << "Strings:" << std::endl;
	std::cout << str[0] << std::endl;
	std::cout << str[1] << std::endl;
	std::cout << str[2] << std::endl;
	std::cout << str[9] << std::endl;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "Integers:" << std::endl;
	std::cout << ints[0] << std::endl;
	std::cout << ints[1] << std::endl;
	std::cout << ints[2] << std::endl;
	std::cout << ints[9] << std::endl;

	std::cout << "=============================================" << std::endl;
	std::cout << "Floats:" << std::endl;
	std::cout << floats[0] << std::endl;
	std::cout << floats[1] << std::endl;
	std::cout << floats[2] << std::endl;
	std::cout << floats[9] << std::endl;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "Exceptions:" << std::endl;
	try
	{
		std::cout << str[11] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index" << e.what() << '\n';
	}
	try
	{
		std::cout << ints[-5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index" << e.what() << '\n';
	}
	try
	{
		std::cout << floats[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index" << e.what() << '\n';
	}
	
}