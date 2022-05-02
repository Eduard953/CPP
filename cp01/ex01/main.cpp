/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:49:14 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/02 12:00:22 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(10, "Printr go brrr");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete[] zombies;
}
