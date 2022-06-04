/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:50:20 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/04 11:40:43 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
// ***************** Subject Test ********************//
	std::cout << "*****************************" << std::endl;
	std::cout << "Normal Functionality" << std::endl;
	std::cout << "\n";
	
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "*****************************" << std::endl;

// ***************** To many elements test ********************//
	try
	{
		std::cout << "Adding too many elements:" << std::endl;
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	std::cout << "*****************************" << std::endl;

// ***************** No Elements init ********************//
	try
	{
		std::cout << "No elements init:" << std::endl;
		Span ne = Span(0);
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	std::cout << "*****************************" << std::endl;
		
// ***************** No Elements Span ********************//
	Span sp2 = Span(5);
	std::cout << "No elements for span:" << std::endl;
	try
	{
		sp2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	try
	{
		sp2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	std::cout << "*****************************" << std::endl;
	
// ***************** 1 Element Span ********************//
	sp2.addNumber(1);
	std::cout << "1 element for span:" << std::endl;
	try
	{
		sp2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	try
	{
		sp2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << "\n";
		std::cerr << e.what() << '\n';
		std::cout << "exception happened" << std::endl;
	}
	std::cout << "*****************************" << std::endl;
	
// ***************** Multiple Elements at once ********************//
	std::cout << "Multiple elements at once:" << std::endl;
	std::cout << "\n";

	Span sp3 = Span(10000);
	std::vector<int> v(10000);
	for (int i = 0; i < 10000; i++)
	{
		v[i] = i + rand() % 444;
	}
	sp3.addNumbers(v);
	std::cout << "longest Span: " << sp3.longestSpan() << std::endl;
	std::cout << "shortest Span: " << sp3.shortestSpan() << std::endl;
	
	std::cout << "*****************************" << std::endl;
// ***************** Multiple to many at once ********************//
	std::cout << "Multiple to many elements at once:" << std::endl;
	std::cout << "\n";

	Span sp4 = Span(10000);
	std::vector<int> v1(10001);
	for (int i = 0; i < 10001; i++)
	{
		v1[i] = i + rand() % 444;
	}
	try
	{
			sp4.addNumbers(v1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "*****************************" << std::endl;
	
	return 0;
}