/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:48:04 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/09 12:09:27 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "Animal type is " << j->getType() << " " << std::endl;
	std::cout << "Animal type is " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal sound!

	delete i;
	delete j;
	delete meta;
	
	std::cout << "\n\n" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongCat* i2 = new WrongCat();

	std::cout << "WrongAnimal type is " << meta2->getType() << " " << std::endl;
	std::cout << "WrongAnimal type is " << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the wrong cat sound!
	meta2->makeSound(); //will output the wrong animal sound!

	delete i2;
	delete meta2;
	
	return 0;
}