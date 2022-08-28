/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:32:01 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/28 15:42:23 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog &obj);
		virtual ~Dog();

		virtual void makeSound() const;
};

#endif //DOG_HPP