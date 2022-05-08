/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:57:19 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 11:31:02 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = "Default";
	std::cout << "Default  FragTrap (CHILD) constructor called" << std::endl;
}


FragTrap::FragTrap(std::string const name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = name;
	std::cout << "FragTrap (CHILD) constructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_attackDamage = obj.getAttackDamage();
		this->_hitPoints = obj.getHitPoints();
		this->_energyPoints = obj.getEnergyPoints();
		this->_name = obj.getName() + "copy";
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap individual " << this->_name << " destructor called" << std::endl;
}

//	MEMBER FUNCTIONS

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << " positive high five guys" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " damage!" << std::endl;
	}
}
