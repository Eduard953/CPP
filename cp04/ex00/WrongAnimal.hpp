/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:30:45 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 12:30:23 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal& operator=(const WrongAnimal &obj);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif //WRONGANIMAL_HPP