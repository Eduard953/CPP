/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:19:11 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 12:56:24 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << std::endl;
	
	Bureaucrat put("put", 150);
	Bureaucrat zel("zel", 1);
	PresidentialPardonForm pres;
	ShrubberyCreationForm shrub;
	ShrubberyCreationForm shrub2("shrub2");
	RobotomyRequestForm rob;
	

	std::cout << std::endl;
	
	std::cout << put << std::endl;
	std::cout << zel << std::endl;
	std::cout << "Form grade is " << pres.getGradeToSign() << std::endl;

	std::cout << std::endl;
	
	try
	{
		pres.execute(put);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	put.signForm(pres);
	zel.signForm(pres);
	zel.signForm(shrub);
	zel.signForm(shrub2);
	zel.signForm(rob);

	pres.execute(zel);
	shrub.execute(zel);
	shrub2.execute(zel);
	
	std::cout << std::endl;
	
	rob.execute(zel);
	rob.execute(zel);
	rob.execute(zel);

	return (0);
}