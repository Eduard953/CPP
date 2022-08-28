/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:32:01 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/28 15:42:27 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"	

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat &obj);
		virtual ~Cat();

		virtual void makeSound() const;
};

#endif //CAT_HPP