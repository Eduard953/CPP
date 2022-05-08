/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:57:19 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 13:10:26 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = "Default";
	std::cout << "Default  ScavTrap (CHILD) constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string const name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "ScavTrap (CHILD) constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_attackDamage = obj.getAttackDamage();
		this->_hitPoints = obj.getHitPoints();
		this->_energyPoints = obj.getEnergyPoints();
		this->_name = obj.getName() + "copy";
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap individual" << this->_name << " destructor called" << std::endl;
}

//	MEMBER FUNCTIONS

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is guarding the gate" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "Scavtrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " damage!" << std::endl;
	}
}

void ScavTrap::setEnergyPoints(void)
{
	this->_energyPoints = 50;
}