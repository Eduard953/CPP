/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:51:52 by ebeiline          #+#    #+#             */
/*   Updated: 2022/06/04 14:05:32 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	# define MUTANTSTACK_HPP
	
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack(MutantStack const &src){ *this = src; };
		MutantStack &operator=(MutantStack const &rhs){ this->_stack = rhs._stack; return *this; };

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
};

#endif // MUTANTSTACK_HPP