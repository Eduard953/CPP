/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:55:05 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 13:16:00 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

DiamondTrap::DiamondTrap()
{
	std::cout << "Default  DiamondTrap (GRANDCHILD) constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string const name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::setHitPoints();
	this->FragTrap::setAttackDamage();
	this->ScavTrap::setEnergyPoints();
	std::cout << "DiamondTrap (GRANDCHILD) constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_attackDamage = obj.getAttackDamage();
		this->_hitPoints = obj.getHitPoints();
		this->_energyPoints = obj.getEnergyPoints();
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap individual " << this->_name << " destructor called" << std::endl;
}

//	MEMBER FUNCTIONS

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << " Claptraps name is " << ClapTrap::_name << std::endl;
}

