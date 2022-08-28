/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:48:04 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/28 15:32:57 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		std::cout << std::endl;
		std::cout << "Brain Test" << std::endl;
		std::cout << std::endl;
		Brain brain;
		
		std::string str[100];
		const std::string *ideas;
		str[0] = "Great Idea";
		str[1] = "Best Idea";
		str[2] = "Pass CPP04";

		brain.setIdeas(str);
		ideas = brain.getIdeas();
		for (int i = 0; i < 3; i++)
			std::cout << ideas[i] << std::endl;
		
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Subject Test " << std::endl;
	std::cout << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Animal *arr[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

	int k = 0;
	while (k < 4)
	{
		delete arr[k];
		k++;
	}
	
	delete j;
	delete i;
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Deep Copy Test " << std::endl;
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "Basic still alive" << std::endl;
	
	return 0;
}
