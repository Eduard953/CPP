/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:10:10 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 15:31:42 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

#include <iostream>

Base * generate(void)
{
	int a = rand() % 3;
	if (a == 0)
		return (new A);
	else if (a == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else
		std::cout << "C";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
		return ;
	}
	catch(std::exception)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
		return ;
	}
	catch(std::exception)
	{
	}
	try 
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
		return ;
	}
	catch(std::exception)
	{
	}
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Base * p = generate();
		std::cout << "Randomly generated Base is of type: ";
		identify(p);
		std::cout << " & ";
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return (0);
}