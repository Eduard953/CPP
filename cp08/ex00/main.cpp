/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:59:24 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/01 14:31:36 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{	
	std::cout << "test array" << std::endl;
	std::array<int, 10> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	easyfind(arr, 6);
	try
	{
		easyfind(arr, 25);
	}
	catch	(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test vector" << std::endl;	
	std::vector<int> v(5, 0);
	for (int i = 0; i < 5; i++)
		v[i] = i;
	easyfind(v, 3);
	try 
	{
		easyfind(v, 25);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test deque" << std::endl;
	std::deque<int> d;
	for (int i = 0; i < 10; i++)
		d.push_back(i);
	easyfind(d, 3);
	try 
	{
		easyfind(d, 25);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test list" << std::endl;
	std::list<int> l;
	for (int i = 0; i < 10; i++)
		l.push_back(i);
	easyfind(l, 9);
	try 
	{
		easyfind(l, 25);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test set" << std::endl;
	std::set<int> s;
	for(int i = 0; i < 4; i++)
		s.insert(i);
	easyfind(s, 3);
	try 
	{
		easyfind(s, 25);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test multiset" << std::endl;
	std::multiset<int> s2;
	for(int i = 0; i < 4; i++)
		s2.insert(i);
	easyfind(s2, 3);
	try 
	{
		easyfind(s2, 25);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;
	
	std::cout << "test array char" << std::endl;
	std::array<char, 10> ca = {'a', 'b', 'g', 'F', 'p', 'q', 'r', 's', 't', 'u'};
	easyfind(ca, 'g');
	try 
	{
		easyfind(ca, 'z');
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "****************************************" << std::endl;

	
	return (0);
}