/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:17:59 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 12:46:57 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// CONSTRUCTORS | DESTRUCTOR

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form", 25, 5), _target("Default")
{
	std::cout << "Default Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
	std::cout << "Presidential Pardon Form copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form destructor called" << std::endl;
}

// OPERATORS

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return *this;
}

// GETTERS

std::string const &PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

// MEMBERS

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
	}
	if (this->getSigned())
		std::cout << "President " << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else
		std::cout << this->getTarget() << " has not been signed yet" << std::endl;
}
