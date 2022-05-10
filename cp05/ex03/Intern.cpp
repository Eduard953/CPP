/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:32:40 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 13:59:03 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// CONSTUCTORS | DESTRUCTOR

Intern::Intern()
{
	std::cout << "Intern constructed" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
}

// OPERATORS

Intern& Intern::operator=(Intern const &rhs)
{
	std::cout << "Intern assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}

// MEMBERS

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	int idx = 3;
	Form *form[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formName == form[i]->getName())
			idx = i;
		else
			delete form[i];
	}
	if (idx < 3)
	{
		std::cout << "Intern creates " << formName << std::endl;
		return form[idx];
	}
	else
	{
		std::cout << "Intern cannot create " << formName << std::endl;
		return NULL;
	}
}