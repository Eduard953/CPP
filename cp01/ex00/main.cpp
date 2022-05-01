/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:49:14 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/01 20:38:23 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie *zombie1;

	randomChump("Zombie1");
	zombie1 = newZombie("Zombie2");
	delete zombie1;
	return (0);
}
