/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:40:50 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/30 11:35:44 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void)
{
	std::cout << "Eval sheet test:" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	std::cout << "=============================================" << std::endl;

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