/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:28:35 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 13:47:33 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTUCTORS | DESTRUCTOR

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// OPERATORS

Brain& Brain::operator=(const Brain &obj)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			this->_ideas[i]= obj._ideas[i];
	return *this;
}

// MEMBER FUNCTIONS

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}