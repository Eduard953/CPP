#include "ClapTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Trap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Trap assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_attackDamage = obj.getAttackDamage();
		this->_hitPoints = obj.getHitPoints();
		this->_energyPoints = obj.getEnergyPoints();
		this->_name = obj.getName() + "copy";
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Trap " << this->_name << " destructor called" << std::endl;
}

//	MEMBER FUNCTIONS

int	ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " damage!" << std::endl;
	}
}	

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "Trap " << this->getName() << " takes " << amount << " damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "Trap " << this->getName() << " is repaired by " << amount << " points!" << std::endl;
	}
}
