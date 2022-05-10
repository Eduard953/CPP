/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:31:05 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 13:47:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
	# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern();

		Intern &operator=(Intern const &rhs);

		Form *makeForm(std::string const &formName, std::string const &target);
};

#endif // INTERN_HPP