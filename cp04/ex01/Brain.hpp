/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:23:48 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 13:29:47 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		Brain& operator=(const Brain &obj);
		~Brain();

		std::string *getIdeas();
};

#endif //BRAIN_HPP
