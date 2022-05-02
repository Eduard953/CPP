/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:32:53 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/02 16:56:42 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << this->_name << " destructor called" << std::endl;
}

HumanA::HumanA(std::string const name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << this->_name << " constructor called with: " << this->_weapon.getType() << std::endl;
}

std::string const HumanA::getName(void)
{
	return (this->_name);
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}