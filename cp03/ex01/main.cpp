/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:43:18 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/07 19:25:01 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap clap("ash");
	ScavTrap scav("scav");
	clap.takeDamage(9);
	clap.beRepaired(9);
	clap.attack("someone");
	scav.guardGate();
	scav.takeDamage(9);
	scav.beRepaired(9);
	scav.attack("Target");
	return (0);
}