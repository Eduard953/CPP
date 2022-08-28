/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:48:04 by ebeiline          #+#    #+#             */
/*   Updated: 2022/08/28 15:45:07 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
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

	//Animal test;
	
	return 0;
}
