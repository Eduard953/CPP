/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:43:18 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/07 18:49:06 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap clap("ash");
	clap.takeDamage(9);
	clap.beRepaired(9);
	clap.attack("Target");
	return (0);
}