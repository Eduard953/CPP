/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:19:11 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 10:55:25 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << std::endl;
	
	Bureaucrat put("put", 150);
	Bureaucrat zel("zel", 1);
	Form form("form", 1, 1);

	std::cout << std::endl;
	
	std::cout << put << std::endl;
	std::cout << zel << std::endl;
	std::cout << "Form grade is " << form.getGradeToSign() << std::endl;

	std::cout << std::endl;
	
	zel.signForm(form);
	put.signForm(form);

	std::cout << std::endl;
		
	return (0);
}