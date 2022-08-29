/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:18:10 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/29 14:02:43 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// CONSTUCTORS | DESTRUCTOR

Form::Form(): _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default Form Constructor called " << std::endl;
}

Form::Form(std::string name, int sign, int exec): _name(name), _signed(false), _gradeToSign(sign), _gradeToExecute(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form Constructor called " << std::endl;
}

Form::Form(const Form &src): _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	std::cout << "Form copy constructor called " << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called " << std::endl;
}

// OPERATORS

Form& Form::operator=(const Form &src)
{
	std::cout << "Form Assignment Operator called " << std::endl;
	if (this != &src)
	{
		this->_signed = src.getSigned();
	}
	return *this;
}

// GETTERS

bool Form::getSigned() const
{
	return this->_signed;
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

// MEMBERS

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
	{
		this->_signed = true;
		std::cout << "Form " << this->_name << " signed by " << bureaucrat.getName() << std::endl;
	}
}

// EXCEPTIONS

char const *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

char const *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
	std::string sign;
	sign = obj.getSigned() ? "signed" : "not signed";
	return (os << "Form " << obj.getName() << ", Status:" << sign << std::endl << "Min grade to sign: " << obj.getGradeToSign() << ", Min grade to execute: " << obj.getGradeToExecute() <<  std::endl);
}