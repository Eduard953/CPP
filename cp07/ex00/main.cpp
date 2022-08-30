/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:41:59 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/30 11:19:00 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome
{
	public:
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
	private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

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
	Swap(a, b);
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
	Swap(c, d);
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
	Swap(e, f);
	std::cout << "e is: " << e << std::endl;
	std::cout << "f is: " << f << std::endl;
	std::cout << "=============================================" << std::endl;
	

	Awesome g(2);
	Awesome h(4);
	
	std::cout << "Awesome:" << std::endl;
	std::cout << "GetMax " << g << " & " << h << " is: "<< GetMax(g, h) << std::endl;
	std::cout << "GetMin " << g << " & " << h << " is: "<< GetMin(g, h) << std::endl;
	std::cout << "g is: " << g << std::endl;
	std::cout << "h is: " << h << std::endl;
	std::cout << "Swap " << g << " & " << h << std::endl;
	Swap(g, h);
	std::cout << "g is: " << g << std::endl;
	std::cout << "h is: " << h << std::endl;
	std::cout << "=============================================" << std::endl;
	return (0);
}