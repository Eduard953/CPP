/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:19:11 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/29 14:41:12 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << std::endl;
	
	Bureaucrat zel("zel", 1);
	RobotomyRequestForm rob;
	Intern intern;
	
	std::cout << std::endl;
	
	Form *test1 = intern.makeForm("Presidential Pardon Form", "house");
	Form *test2 = intern.makeForm("Robotomy Request Form", "house");
	Form *test3 = intern.makeForm("Shrubbery Form", "house");
	Form *test4 = intern.makeForm("undefined", "house");
	
	std::cout << std::endl;
	
	zel.signForm(*test1);
	zel.signForm(*test2);
	zel.signForm(*test3);

	std::cout << std::endl;
	
	test1->execute(zel);
	test2->execute(zel);
	test3->execute(zel);

	std::cout << std::endl;
	
	delete test1;
	delete test2;
	delete test3;
	delete test4;

	return (0);
}