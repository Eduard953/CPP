/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:45:51 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/29 14:38:04 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// CONSTRUCTORS | DESTRUCTOR

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

// OPERATORS

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_grade = src.getGrade();
	}
	return *this;
}

// GETTERS

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

// MEMBERS

void Bureaucrat::incrementGrade()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign form " << form.getName() << " because " << e.what() << '\n';
	}
	
}

void Bureaucrat::executeForm( Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooHighException & e)
	{
		std::cout << "Rejected execution: " << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cout << "Rejected execution: " << e.what() << std::endl;
	}
}

// EXCEPTIONS

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

// OSTREAM

std::ostream& operator<<(std::ostream &stream, Bureaucrat const &ref)
{
	stream << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return stream;
}