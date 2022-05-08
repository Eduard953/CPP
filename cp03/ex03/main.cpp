/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:43:18 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 11:33:48 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap clap("ash");
	FragTrap frag("frag");
	ScavTrap scav("scav");
	clap.takeDamage(9);
	clap.beRepaired(9);
	clap.attack("someone");
	frag.highFiveGuys();
	frag.takeDamage(9);
	frag.beRepaired(9);
	frag.attack("Target");
	scav.guardGate();
	scav.takeDamage(9);
	scav.beRepaired(9);
	scav.attack("Target");
	return (0);
}