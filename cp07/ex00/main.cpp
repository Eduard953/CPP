/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:41:59 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 20:36:55 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
	int a = 42;
	int b = 2;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "Integers:" << std::endl;
	std::cout << "GetMax " << a << " & " << b << " is: "<< GetMax(a, b) << std::endl;
	std::cout << "GetMin " << a << " & " << b << " is: "<< GetMin(a, b) << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "Swap " << a << " & " << b << std::endl;
	::Swap(a, b);
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "=============================================" << std::endl;

	char c = 'a';
	char d = 'b';
	
	std::cout << "Characters:" << std::endl;
	std::cout << "GetMax " << c << " & " << d << " is: "<< GetMax(c, d) << std::endl;
	std::cout << "GetMin " << c << " & " << d << " is: "<< GetMin(c, d) << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "d is: " << d << std::endl;
	std::cout << "Swap " << c << " & " << d << std::endl;
	::Swap(c, d);
	std::cout << "c is: " << c << std::endl;
	std::cout << "d is: " << d << std::endl;
	std::cout << "=============================================" << std::endl;

	std::string e = "HELLO42";
	std::string f = "HI2";

	std::cout << "Strings:" << std::endl;
	std::cout << "GetMax " << e << " & " << f << " is: "<< GetMax(e, f) << std::endl;
	std::cout << "GetMin " << e << " & " << f << " is: "<< GetMin(e, f) << std::endl;
	std::cout << "e is: " << e << std::endl;
	std::cout << "f is: " << f << std::endl;
	std::cout << "Swap " << e << " & " << f << std::endl;
	::Swap(e, f);
	std::cout << "e is: " << e << std::endl;
	std::cout << "f is: " << f << std::endl;
	std::cout << "=============================================" << std::endl;
	
	return (0);
}