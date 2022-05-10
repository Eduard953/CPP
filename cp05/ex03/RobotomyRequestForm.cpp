/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:50:19 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 13:03:10 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45), _target("Default")
{
	std::cout << "Default Robotomy Request Form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	std::cout << "Robotomy Request Form copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form destructor called" << std::endl;
}

// OPERATORS

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return *this;
}

// GETTERS

std::string const &RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

// MEMBERS

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
	}
	if (this->getSigned())
		{
			std::cout << "drilling noises drrrrrrr" << std::endl;
			srand(time(NULL));
			if (rand() % 2)
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << "robotomy failed" << std::endl;
		}
	else
		std::cout << this->getTarget() << " has not been signed yet" << std::endl;
}