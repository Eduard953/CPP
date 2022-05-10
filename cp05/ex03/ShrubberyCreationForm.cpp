/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:30:05 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 12:47:52 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Form", 145, 137), _target("Default")
{
	std::cout << "Default Shrubbery Form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form("Shrubbery Form", 145, 137), _target(target)
{
	std::cout << "Shrubbery Form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
	std::cout << "Shrubbery Form copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Form destructor called" << std::endl;
}

// OPERATORS

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return *this;
}

// GETTERS

std::string const &ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

// MEMBERS

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
	}
	if (this->getSigned())
	{
		std::ofstream file;
		file.open(("./" + this->_target + "_shrubbery").c_str());
		if (file.is_open())
		{
			file << "888" << std::endl;                           
			file << "888" << std::endl;          
			file << "888                " << std::endl;           
			file << "888888888d888 .d88b.  .d88b. " << std::endl; 
			file << "888   888P  d8P  Y8bd8P  Y8b " << std::endl;
			file << "888   888   8888888888888888 " << std::endl;
			file << "Y88b. 888   Y8b.    Y8b.    " << std::endl; 
			file << " Y888888      Y8888   Y8888  " << std::endl;
			file.close();
		}
	}
	else
		std::cout << this->getTarget() << " has not been signed yet" << std::endl;
}