/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:46:53 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/02 16:57:31 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
	std::cout << this->_name << " destructor called" << std::endl;
}

HumanB::HumanB(std::string const name): _name(name)
{
	std::cout << this->_name << " constructor called" << std::endl;
}

std::string const HumanB::getName(void)
{
	return (this->_name);
}

void HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with bare fists" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " now yields " << this->_weapon->getType() << std::endl;
}