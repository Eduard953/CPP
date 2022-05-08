/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:43:18 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 11:29:58 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	ClapTrap clap("ash");
	FragTrap frag("frag");
	clap.takeDamage(9);
	clap.beRepaired(9);
	clap.attack("someone");
	frag.highFiveGuys();
	frag.takeDamage(9);
	frag.beRepaired(9);
	frag.attack("Target");
	return (0);
}